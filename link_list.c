#include<stdio.h>
#include<stdlib.h>

struct link{
	int x;
	struct link *a;
}*p, *q, *r, *y;

int main(){
	
	int num1, num2, num3;
	printf("Enter the elements: \n");
	scanf("%d %d %d",&num1, &num2, &num3);a

	p = (struct link *)malloc(sizeof(struct link));
	q = (struct link *)malloc(sizeof(struct link));
	r = (struct link *)malloc(sizeof(struct link));

	p -> x = num1;
	p -> a = q;
	q -> x = num2;
	q -> a = r;
	r -> x = num3;
	y = p;

	printf("\nElement in p = %d at address = %p\n",p->x, y);
	printf("Element in q = %d at address = %p\n",q->x, q);
	printf("Element in r = %d at address = %p\n",r->x, r);
	return 0;	
}
