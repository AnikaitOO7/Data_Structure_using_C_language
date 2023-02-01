//Author: Anikait Singh
//Creation date: 26 May,2021
//Purpose: To store.

#include <stdio.h>  //Pre processor directive to include standard input output function header file.
struct contact{
    char Name[20];
    double MobileNumber;
    char Adress[20];
};

int main(){ //Start of main function body.
    int i, n;
    struct contact s[4];
    printf("Enter how many owners you want to get contact : ");
    scanf("%d",&n);
    printf("Enter information of owners :\n");

    for (i =1; i <= n; ++i){
        printf("\nEnter %d name: ",i);
        scanf("%s",&s[i].Name);
        printf("\nEnter mobile number: ");
        scanf("%lf",&s[i].MobileNumber);
        printf("\nEnter Adress of the person: ");
        scanf(" %s",&s[i].Adress);
    }

    printf("Displaying Information:\n\n");

    printf("\n\tS.No\t\t\tName\t\t\tMobile number\t\t\tAdress\t\n");
        for(i=1; i<=n; i++)
            printf("\t%d\t\t\t%s\t\t\t%.0lf\t\t\t%s\t\n", i, s[i].Name, s[i].MobileNumber, s[i].Adress);
    return 0;   //Return statement. 
}   //End of main function body.