#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *arr, i,*a;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    a = (int*) malloc(num * sizeof(int));
    for(i=0;i<=num;i++)
    {
        a[i-1] = arr[num-i];
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(a + i));
    return 0;
}