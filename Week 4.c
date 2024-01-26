#include<stdio.h>

int main()
{
    int i , j , rows , columns , a[10][10],Sum = 0;

    printf("\n Please Enter Number of Rows and Columns : ");
    scanf("%d %d ",&i,&j);

    printf("\n Please Enter the Matrix Elements \n");
    for(rows=0;rows<i;rows++)
    {
        for(columns=0;columns<j;columns++)
        {
          scanf("%d",&a[rows][columns]);
        }
    }
         for(rows=0;rows<i;rows++)
       {
        Sum=Sum+a[rows][i-rows-1];
       }
    printf("\n The Sum of opposite diagonal Elements of a matrix= %d",Sum);
    return 0;
}
