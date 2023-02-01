#include <stdio.h>
int main()
{
int row;
scanf("%d", &row);

for(int i = row; i >= 1; i--){
for(int j = row; j > i; j--)
printf("%d ", j);
for(int j = 1; j <= 2 * i - 1; j++)
printf("%d ", i);
for(int j = i + 1; j <= row; j++)
printf("%d ", j);
printf("\n");
}
for(int i = 1; i < row; i++){
for(int j = row; j > i; j--)
printf("%d ", j);
for(int j = 1; j <= 2 * i - 1; j++)
printf("%d ", i + 1);
for(int j = i + 1; j <= row; j++)
printf("%d ", j);
printf("\n");
}
return 0;
}