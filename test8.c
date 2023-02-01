#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(10 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int a = strlen(s);
    for(int i = 0; i < a; i++) {
        if(s[i] == ' ') {
            printf("\n");
        }
        else {
            printf("%c", s[i]);
        }
    }
    return 0;
}