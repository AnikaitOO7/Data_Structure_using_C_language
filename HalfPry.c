#include <stdio.h>
int main() {
   int i, j, rows,n;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = rows-1; j >= i; --j) 
         printf(" ");
      for(n=1;n<=i;n++)
         printf("*");   
      printf("\n");   
   }
   return 0;
}