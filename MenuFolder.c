//Author: Anikait Singh
//Creation date: 20 May,2021
//Purpose: To create .


#include <stdio.h>  //Pre-Process directive to include standard input output header file.
#include <stdlib.h> //Pre-Process directive to include standard library.
int main(){ //Start of min function body.
    int a[100];
    int element,i,loc,size,n,j,choice,b,a_Search, found;    //Integer variable decleration.
    
    //printf function call for printing search, insert and delete in an array.
    printf("C Program to Search,Insert and Delete an Element in an Array using switch case\n");
	printf("1. Searching an Element in an Array\n");
    printf("2. Inserting an Element in an Array\n");
    printf("3. Deleting an Element in an Array\n");
    
    printf("Select your choice : ");    //printf function call for printing select your choice.
    scanf("%d",&choice);    //taking input from user.

    //Switch operator for choosing search, insert, and deleting element in an array.
    switch(choice){
    case 1: //case 1 to search element in an array.
    	printf("\nEnter size of array: ");
    	scanf("%d", &size);
    	printf("Enter elements in array: ");
    for(b=0; b<size; b++){  //for loop for searching element.
        scanf("%d", &a[b]);
    }

    	printf("\nEnter element to search: ");
    	scanf("%d", &a_Search);
    found = 0; 	
    for(b=0; b<size; b++){
        /* 
         * If element is found in array then raise found 
         * and terminate from loop.
         */
        if(a[b] == a_Search){
            found = 1;
            break;
        }
    }
    /*
     * If element is not found in array
     */
    if(found == 1){
        printf("\n%d is found at position =  %d ", a_Search,b);
    }
    else{
        printf("\n%d is not found in the array", a_Search);
    }
    break;

    case 2: //Case 2 to insert element in an array.
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        printf("List before Insertion: ");  //printf function call to print list before insertion.
        for(i=0;i<size;i++){    //for loop to view list.
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to insert\n");
        scanf("%d",&element);
        printf("Enter a position to insert an element %d\n",element);   //printf functon call for printing position to insert an element.
        scanf("%d",&loc);
        loc--;
        for(i=size-1;i>=loc;i--){   //for loop to replace the element to the desired position.
            a[i+1]=a[i];
        }
        a[loc]=element;
        printf("List after Insertion: ");
        for(i=0;i<size+1;i++){
            printf("%d ",a[i]);
        }
        break;

    case 3: //Case 3 to delete an element of an array.
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter elements\n");
        for(i=0;i<size;i++){    //for loop for entring element in an array.
            scanf("%d",&a[i]);
        }
        printf("List before deletion\n");
        for(i=0;i<size;i++){
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to delete\n");
        scanf("%d",&n);
        for(i=0;i<size;i++){    //for loop to delete element in an array.
            if(a[i]==n){
                for(j=i;j<(size-1);j++){
                    a[j]=a[j+1];
                }
                break;  //break statement to break the loop.
            }
        }
        printf("List after deletion\n");
        for(i=0;i<(size-1);i++)
        {
            printf("%d ",a[i]);
        }
        break;
        
    default:    //default when user enter wrong choice.
        printf("Wrong choice, Please try again later");
    }
    return 0;   //Return statement.
}   //End of main function body.