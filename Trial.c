#include<stdio.h>

int main()
{
    int x, y , sum;

    printf("Enter X");
    scanf("%d",x);

    printf("Enter y");
    scanf("%d",y);

    if (x<0)
    {
        break;
    }
    sum=x+y;
    printf("%d",sum);
}
