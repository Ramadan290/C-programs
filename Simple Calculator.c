#include<stdio.h>
#include<math.h>

int main()
{
    float x;
    float y;
    char z;
    float answer;


    printf("Enter first Value: \n");
    scanf("%f",x);

    printf("Enter Second Value:  \n");
    scanf("%f",y);

    printf("What do you want do with those values(Type in the operator): \n ");
    scanf("%c",z);

    if(z== "*")
    {
        answer= (x*y);
        printf("The answer to your equation is %f",&answer);
    }
    else if(z=="+")
    {
        answer= x+y;
        printf("The answer to your equation is %f",&answer);
    }
     else if(z=="-")
    {
        answer= x-y;
        printf("The answer to your equation is %f",&answer);
    }
     else if(z=="^")
    {
        answer= (x*x)+(y*y);
        printf("The answer to your equation is %f",&answer);
    }
     else if(z=="sqrt")
    {
        answer= sqrt(y);
        printf("The answer to your equation is %f",&answer);
    }
    else{}







}
