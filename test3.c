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
    printf("Enter information  :\n");

    for (i =1; i<=n; ++i){
        printf("Enter %d name: ",i);
        scanf("%s", &s[i].Name);
        printf("\nEnter mobile number:\n");
        scanf("%lf", &s[i].MobileNumber);
        printf("Enter address of the person:");
        scanf(" %s", &s[i].Adress);
    }

    printf("Displaying Information:\n\n");

    printf("\n\tS.No\t\tName\t\tMobile number\t\tAdress\t\n");
        for(i=1; i<=n; i++)
                printf("\t%d\t%s\t%\t%s\t\n", i, s[i].Name, s[i].MobileNumber, s[i].Adress);
    return 0;   //Return statement. 
}   //End of main function body.