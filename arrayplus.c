//Author: Anikait Singh

#include<stdio.h>   //Pre processor directive to include standard input output function header file.
#include<stdlib.h>
int main(){ //Start of main function body.
	int n, i, j; //Integer variables and array declaration.
	printf("Enter the size of an array: ");
	scanf("%d",&n);

	int* arr;  
    arr = (int *)malloc(n*sizeof(int));
	printf("Enter the elements for an array:\n");
	for(i = 0; i < n; i++){
        printf("Enter the arrays:arr[%d]\n", i);
		scanf("%d",&arr[i]);
    }

 	printf("Enter element to search:"); //Asking user to enter element to search 
    scanf("%d",&j);
     
    for(i=0;i<n;++i)
        if(arr[i]==j)
            break;
     
    if(i<n)
        printf("\nElement found at index %d\n",i); //If true Print the element found at index.
    else
        printf("\nElement not found\n"); //If False Print "Element not found"
    
    arr = realloc(arr,(n* sizeof(int)+1));
    printf("\nEnter the new array element : arr[%d]\n", n);
    scanf(" %d",(arr+n));
    for (i = 0; i < n+1; ++i)
    {
        printf(" Showing the elements of arrays : arr[%d] = %d\n", i, *(arr+i));
    }
   
    printf(" Enter element to search:"); 
    scanf("%d",&j);
     
    for(i=0;i<n+1;++i)
        if(arr[i]==j)
            break;
     
    if(i<n+1)
        printf(" Element found at index %d",i); 
    else
        printf(" Element not found"); 
    return 0;
} //End Of the main function body 