//Author: Anikait Singh
//Creation date: 22 June,2021
//Purpose: Priority Queue

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int *a;
int n, x, rear = -1,front = -1;
int en_queue();
int de_queue();
void view();
int check();
int main()
{
    int ch;
    printf("Enter the size of queue: ");
    scanf("%d",&n);
    a = (int*)malloc(n * sizeof(int));
    printf("\n\n\t\t\t**MENU FOR Queue**\n\n");
    while(1){
        printf("\nEnter 1 to enqueue element in stack.");
        printf("\nEnter 2 to dequeue element in stack.");
        printf("\nEnter 3 to view element in stack.");
        printf("\nEnter 4 to Exit.");
        printf("\n\nEnter the choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:en_queue();
                        break;
            case 2:de_queue();
                        break;
            case 3:view();getch();
                        break;
            case 4:exit(0);
            default:printf("\n\n\t**Enter the right choice given in menu**\n\n ");
        }
    }
    return 0;
}

int en_queue()
{
    if (rear == n -1)
        printf("\nQueue is overflowing\n");
    else
    {
        printf("\nEnter the elements: ");
        scanf("%d",&x);
        if (front == -1)
        {
            front = 0;
            rear  = 0;
            a[rear] = x;
        }    
        else{
            check(x);
            rear = rear + 1;
        }
    }
    return 0;
}

int check(){
    int i,j;
 
    for (i = 0; i <= rear; i++)
    {
        if (x >= a[i])
        {
            for (j = rear + 1; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i] = x;
            return 0;
        }
    }
    a[i] = x;
    return 0;
}

int de_queue()
{
    if(front == -1 || front > rear)
        printf("\nQueue is underflowing\n");
    else
    {
        printf("\nElement %d has been popped out from queue\n",a[rear]);
        rear = (rear - 1);
    }
    return 0;
}

void view()
{
    int i;
    if (front == -1 || front > rear){
        printf("\nEmpty!!!!!");
    }
    else{
        printf("\nElements of the queue:\n");
        for(i = rear; i >= front; --i){
            printf("%d\n",a[i]);
        }
    }
}
