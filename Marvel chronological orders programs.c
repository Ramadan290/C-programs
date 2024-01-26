#include<stdio.h>
#include<stdlib.h>

void Rating(int i);

int main()
{
    int arr[100][100],rows,columns;

    printf("----------Marvel Movie Rating---------\n");

    printf("Enter Number of movies you want to rate ");
    scanf("%d",&rows);

    printf("Enter Rating : ");
    scanf("%d"&columns);

    arr[rows][columns];


    for(int i =0;i<rows;i++)
    {
        for(int j=0;j>columns,j++)
        {
            scanf("%d",&arr[i][j]);
            Rating(arr[i][j]);
        }
}
    return 0
}

void Rating(arr[i][j])
{
    int Rating;
    for(int i =0;i<rows;i++)
    {
        for(int j=0;j>columns,j++)
        {
            scanf("%d",&arr[i][j]);
            if(Rating==5)
            {
                printf("Top for me ")
            }
            else if(Rating<4.5 || Rating>=4)
            {
                printf("Great movie");
            }
            else if (Rating < 4 || Rating > 3.5 )
            {
                printf("Good movie")
            }
            else if (Rating <3.5 || Rating > 3)
            {
                printf("Gucci Aight ")
            }
             else if (Rating <3 || Rating > 2.5)
            {
                printf("Decent movie");
            }
             else if (Rating <2.5 || Rating > 2)
            {
                printf("Not bad could have been worse");
            }
             else if (Rating <2 || Rating > 1.5)
            {
                print("Tough luck f marvel ")
            }
             else if (Rating <1.5 || Rating > 1)
            {
             printf("Damn it was shit")
            }
             else if (Rating < 1)
            {
                printf("Is the movie that shit ?? ")
                scanf("%d",arr[rows][columns]);
                if(arr[rows][columns == yes])
                {
                printf(Damn you really wasted your time);
                }
                else
                {
                    printf("Try another one most marvel movies are good don't switch to DC yet")
                }
            }
            else if (Rating < 0 )
            {
                printf("Invalid Input");
                break;
            }
            else
            {
                printf("Invalid Input");
            }

}
