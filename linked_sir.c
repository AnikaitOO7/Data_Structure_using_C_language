#include<stdio.h>  
#include<stdlib.h>  

//1. creating structure of nodes

struct node   
{  
    int data;  
    struct node *next;
};  

//2. Creating head node

struct node *head=NULL;  

//3. function prototype     
void lastinsert ();   
void last_delete();   
void display();  
void search();  

//4. Main Function (Menu)
int main ()  
{  
    int choice =0;  
    while(choice != 5)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert at last\n2.Delete from last\n3.Search for an element\n4.Show\n5.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:    
                    lastinsert();         
                    break;  
            case 2:  
                    last_delete();        
                    break;  
            case 3:  
                    search();         
                    break;  
            case 4:  
                    display();        
                    break;  
            case 5:  
                    exit(0);  
                    break;  
            default:  
                    printf("Please enter valid choice..");  
        }  
    }  
}  
 
void lastinsert()  
{  
    //creating two pointer variables to hold adresses for nodes, 
    //first node (*ptr) to hold data and 
    //second node (*temp) for address traversal 

    struct node *ptr,*temp;  
    int element;     
    
    //Allocating memory for node
    ptr = (struct node*)malloc(sizeof(struct node));

    //Checking if memeory available in RAM      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&element);  
        ptr->data = element;
        ptr->next = NULL;  
        if(head == NULL)  
        {  
            head = ptr;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;   
            printf("\nNode inserted");     
        }  
    }  
}  

 
void last_delete()  
{  
    struct node *ptr,*ptr1;  
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
          
    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}  

void search()  
{  
    struct node *ptr;  
    int element,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter Element which you want to search?\n");   
        scanf("%d",&element);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == element)  
            {  
                printf("Element found at location %d ",i+1);  
                flag=0;
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("Element not found\n");  
        }  
    }     
          
}  
  
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     
       