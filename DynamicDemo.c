#include<stdio.h>
#include<stdlib.h>
int  n,ch, i;
int *a;
int test_malloc();
int test_calloc();
int test_realloc();
int main()
{
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\n\n\t\t\t**MENU FOR DEMO OF DYNAMIC MEMORY ALLOCATION**\n\n");
    while(1){
        printf("\n\nEnter 1 to use malloc.");
        printf("\nEnter 2 to use calloc.");
        printf("\nEnter 3 to use realloc.");
        printf("\nEnter 7 to Exit.\n");
        printf("\n\nEnter the choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:test_malloc();
                        break;
            case 2:test_calloc();
                        break;
            case 3:test_realloc();
            case 4:exit(0);
            default:printf("\n\n\t**WARNING!!! Enter the right choice given in menu**\n\n ");
        }
    }
    return 0;
}

int test_malloc()
{
    a = (int *)malloc(n*sizeof(int));
    for(i = 0; i < n; i++){
        printf("enter the element at %d index in an array: ",i);
        scanf("%d",(a+i));
    }
    for(i=0; i<n; i++)
        printf("\nElement at %d index in an array: %d ",i,*(a+i));
    return 0;
}

int test_calloc()
{
    a = (int *)calloc(n,sizeof(int));
    for(i = 0; i < n; i++){
        printf("enter the element at %d index in an array: ",i);
        scanf("%d",(a+i));
    }
    for(i=0; i<n; i++)
        printf("\nElement at %d index in an array: %d ",i,*(a+i));
    free(a);
    return 0;
}

int test_realloc()
{
    for(i=0; i<n; i++)
        printf("\nElement at %d index in an array: %d ",i,*(a+i));
    printf("\nEnter the new size of array: ");
    scanf("%d",&n);
    a = (int *)realloc(a,n*sizeof(int));
    for(i = 0; i < n; i++){
        printf("enter the element at %d index in an array: ",i);
        scanf("%d",(a+i));
    }
    for(i=0; i<n; i++)
        printf("\nElement at %d index in an array: %d ",i,*(a+i));
    return 0;
}
