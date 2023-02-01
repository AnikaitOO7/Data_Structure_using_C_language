#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int n, x, ch, lim = -1, i;
int* a;
int push();
int pop();
void view();

int push()
{
    if (lim == n)
        printf("\nStack is overflowing\n");
    else
    {
        printf("\nEnter the elements: ");
        scanf("%d",&x);
        lim = lim + 1;
        a[lim] = x;
    }
    return 0;
}

int pop()
{
    if(lim == -1)
        printf("\nStack is underflowing\n");
    else
    {
        printf("\nElement %d has been popped out from stack\n",a[lim]);
        lim = lim - 1;
    }
    return 0;
}

void view()
{
    printf("\nElements in the stack are:\n");
    for(i = lim; i>=0; i--){
        printf("%d\n",a[i]);
    }
    if (lim == -1){
        printf("\nThere is no element in stack");
    }
}