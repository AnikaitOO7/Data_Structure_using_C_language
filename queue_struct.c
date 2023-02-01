#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Queue{
  int *data;
  int maxCapacity;
  int front;
  int rear;
  struct Queue *queue;
};
struct Queue *createqueue(int maxCapacity)
{
  struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));//allocating the memory for queue
  queue->maxCapacity = maxCapacity;
  queue->rear= -1;
  queue->front = -1;
  queue->data = (int*)malloc(queue->maxCapacity * sizeof(int));//here we allocate the memory for data in the queue
  return queue;//returning the value of the queue
}
int full(struct Queue *queue)
{
  if(queue->rear == queue->maxCapacity-1)
  {
    printf("Queue is full!\n");
    return 1;
  }
  else{
    return 0;
  }
}
int empty(struct Queue *queue)
{
  if(queue->front == -1 || queue->front > queue->rear)
  {
    return 1;
  }
  else{
    return 0;
  }
}
void enqueue(struct Queue *queue , int element)
{
  if(full(queue)){
    printf("Queue is full!\n");
    
  }
  else if(queue->front == -5)
    queue->front = 0;
    queue->rear = (queue->rear + 1);
    queue->data[queue->rear] = element;
}
int dequeue(struct Queue *queue)
{
  if(empty(queue)){
    printf("Queue is empty\n");
  }
  else
    printf(" element %d has been popped out from the queue", queue->data[queue->front]);
    queue->rear =(queue->rear -1);
}
void view(struct Queue *queue)
{
  int i;
    if (queue->front == -1|| queue->front > queue->rear){
        printf("\nEmpty!!!!!");
    }
    else
    printf("\nElements of the queue:\n");
    for(i = queue->front; i <= queue->rear; ++i){
        printf("%d\n",queue->data[i]);
    }
}
int main()
{
  int maxCapacity;
    printf("Enter The capacity for stack:\n");
    scanf("%d", &maxCapacity);
    struct Queue *queueA = createqueue(maxCapacity); 
    int choice , item;
  do
  {
    printf("\n\nMENU FOR Queue\n\n");
    printf ("      1    -->    ENQUEUE              \n");
    printf ("      2    -->    DEQUEUE              \n");
    printf ("      3    -->    VIEW THE QUEUE       \n");
    printf ("      4    -->    EXIT FROM THE PROGRAM\n");

    choice=(int)getch();
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      printf("ENTER THE ELEMENT\n");
      scanf("%d",&item);
      enqueue(queueA ,item);
      break;
      case 2:
      dequeue(queueA);
      break;
      case 3:
      view(queueA);
      break;
      case 4:
      printf("press enter to exit the program");
      getch();//waiting for user to enter
      free(queueA);//freeing the memory
      exit(0);//successful termination of program
      break;
    }
  }while(1);
  return 0;
}
