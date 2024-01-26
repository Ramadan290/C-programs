#include <stdio.h>
#include<math.h>
int main()
{


    int x;

    int count=0;

    printf("Enter a number: ");

    scanf("%d",&x);

    count=(x==0)?1:log10(x)+1;

    printf("Number of digits in an integer is : %d",count);

    return 0;


}
