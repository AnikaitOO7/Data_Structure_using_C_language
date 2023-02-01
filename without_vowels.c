#include<stdio.h>   //Pre processor directive to include standard input and output function header file.    
#include<string.h>
int main(){ //Start of the main body.
    char ch[50];
    int i, j, n;
    printf("Enter the statement  to delete vowels \n\n");
    scanf("%s",ch);
    n=strlen(ch);
    for(i=0; i<n; i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
        {
            for(j=i; j<n; j++)
            {
                ch[j]=ch[j+1];
            }
            i = i - 1;
        }
    }
        printf("\n\n%s",ch);
    return 0;   //Return statment.
}   //End