#include<stdio.h>
main()
{
int x = 5;
int *p;
p=&x;
x++;
printf("%d",*p);
}
