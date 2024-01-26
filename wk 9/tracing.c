#include<stdio.h>
void Test(int a, int *b)
{
a = 3 * *b;
*b += a;
printf(“%d %d”, a, *b);
return;
}

void main()
{
int x, y;
scanf(“%d %d”, &x, &y);
Test(x, &y);
printf(“%d %d”, x, y);
Test(y, &x);
printf(“%d %d”,x, y);
}
