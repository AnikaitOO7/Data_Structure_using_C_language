#include<stdio.h>   //Pre processor directive to include standard input and output function header file.    
int main(){ //Start of the main body.
    char ch[50];
    int i;
    printf("Enter the statement  to delete vowels \n\n");
    scanf("%s",&ch);
    printf("\nStatement  without vowels : ");
    for(i=0; ch[i] != '\0'; i++)
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
        {
           continue;
        }
        else{
        printf("%c",ch[i]);
        }
    return 0;   //Return statment.
}   //End