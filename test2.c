#include <stdio.h>
#define max 50
int main() 
{
    char ch[50], s[50], sen[50];
    scanf("%[^\n]%*c", ch);
    printf("%n%*c",*ch);
    scanf("%[^\n]%*c", s);
    printf("%[^\n]%*c",*s);    
    scanf("%[^\n]%*c", sen);
    printf("%[^\n]%*c",*sen);
    return 0;
}
