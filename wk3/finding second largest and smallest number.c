#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number[30];
    int i , j , a , n , counter;

    printf("Enter the value of N; \n");
    scanf("%d",&n);


    printf("Enter the numbers: ");
    for(i=0;i<n;i++);
        scanf("%d",&number[i]);

        printf("Enter the numbers: ");
        for( i=0 ; i<n ; i++)
        {
            for(j=i+1;j<n;j++)
        {
               if(number[i] < number[j])
        {
                  a = number[i];
                  number[i]= number[j];
                  number[j]= a;

              }

           }
        }

        printf("numbers are arranged in descending order");

        for(i=0;i<n;i++)
        {
            printf("%d\n",number[i]);

        }

        printf("The 2nd largest number is %d\n",number[1]);
        printf("The 2nd smallest number is %d\n",number[n-2]);

}
