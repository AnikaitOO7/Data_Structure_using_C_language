#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[20], n, x, y, ch, limA = -1, limB , i;
int pushA();
int popA();
void viewA();
int pushB();
int popB();
void viewB();
int main()
{
    printf("Enter the size of stack: ");
    scanf("%d",&n);
    limB = n;
    printf("\n\n\t\t\t**MENU FOR MULTIPLE STACKS**\n\n");
    while(1){
        printf("\n\nEnter 1 to push element in first stack.");
        printf("\nEnter 2 to pop element in  first stack.");
        printf("\nEnter 3 to view element in  first stack.");
        printf("\nEnter 4 to push element in second stack.");
        printf("\nEnter 5 to pop element in  second stack.");
        printf("\nEnter 6 to view element in  second stack.");
        printf("\nEnter 7 to Exit.\n");
        printf("\n\nEnter the choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:pushA();
                        break;
            case 2:popA();
                        break;
            case 3:viewA();getch();
                        break;
            case 4:pushB();
                        break;
            case 5:popB();
                        break;
            case 6:viewB();getch();
                        break;
            case 7:exit(0);
            default:printf("\n\n\t**WARNING!!! Enter the right choice given in menu**\n\n ");
        }
    }
    return 0;
}

int pushA()
{
    if (limA == n)
        printf("\nStack first  is overflowing\n");
    else
    {
        printf("\nEnter the elements in first stack: ");
        scanf("%d",&x);
        limA = limA + 1;
        a[limA] = x;
    }
    return 0;
}

int popA()
{
    if(limA == -1)
        printf("\nStack first  is underflowing\n");
    else
    {
        printf("\nElement %d has been popped out from  first stack\n",a[limA]);
        limA = limA - 1;
    }
    return 0;
}

void viewA()
{
    if (limA == -1){
        printf("\nEmpty!!!!!");
    }
    else{
        printf("\nElements of the  first stack:\n");
        for(i = limA; i>=0; --i){
            printf("%d\n",a[i]);
        }
    }
}

int pushB()
{
    if (limB -1 == limA)
        printf("\nStack second is overflowing\n");
    else
    {
        printf("\nEnter the elements in second stack: ");
        scanf("%d",&y);
        limB = limB - 1;
        a[limB] = y;
    }
    return 0;
}
int popB()
{
    if(limB == n)
        printf("\nStack second  is underflowing\n");
    else
    {
        printf("\nElement %d has been popped out from second stack\n",a[limB]);
        limB = limB + 1;
    }
    return 0;
}

void viewB()
{
     if (limB == n){
        printf("\nEmpty!!!!!");
    }
    else{
    printf("\nElements of the second stack:\n");
    for(i = limB; i< n; i++){
        printf("%d\n",a[i]);
    }
   }
}