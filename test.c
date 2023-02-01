#include<stdio.h>
 void insert(int *b);

 int main(){
    int a[5];
    printf("Enter the elements of an array\n");
    for (int i=0; i<4; i++){
        scanf("%d",&a[i]);
    }
    printf("\nelements of an array");
    for(int i=0; i<4; i++){
        printf("\n%d",a[i]);
    }
    insert(a);
    printf("\nelements of array after calling function\n");
    for(int i=0; i<5; i++){
        printf("\n%d",a[i]);
    }
    return 0;
 }

void insert(int *b)
{
    printf("\nEnter the element to insert in array\n");
    scanf("%d",(b+2));
}