#include<stdio.h>
#include<stdlib.h>

struct Movie_Rating
{
 char Movie[100] ;
 int  Rate;
};

int main()
{
    struct Movie_Rating , Movie_Rating;
	printf("Enter Movie: \n");
	scanf("%c",&Movie_Rating.Movie);
	printf("Enter Rating:");
	scanf("%d",&Movie_Rating.Rate);
	Rating(Movie_Rating);
	return 0;

}

void Rating(struct Movie_Rating)
{


            if(Rate==5)
            {
                printf("%d",&Movie_Rating.Movie)
                printf("Top for me ")
            }
            else if(Rate<4.5 || Rate>=4)
            {
                printf("%d",&Movie_Rating.Movie)
                printf("Great movie");
            }
            else if (Rate < 4 || Rate > 3.5 )
            {
                printf("%d",&Movie_Rating.Movie)
                printf("Good movie")
            }
            else if (Rate <3.5 || Rate > 3)
            {
                printf("%d",&Movie_Rating.Movie)
                printf("Gucci Aight ")
            }
             else if (Rate <3 || Rate > 2.5)
            {
                printf("%d",&Movie_Rating.Movie)
                printf("Decent movie");
            }
             else if (Rate <2.5 || Rate > 2)
            {
                printf("%d",&Movie_Rating.Movie)
                printf("Not bad could have been worse");
            }
             else if (Rate <2 || Rate > 1.5)
            {
                printf("%d",&Movie_Rating.Movie)
                print("Tough luck f marvel ")
            }
             else if (Rate <1.5 || Rate > 1)
            {
             printf("%d",&Movie_Rating.Movie)
             printf("Damn it was shit")
            }
             else if (Rate < 1)
            {
                printf("%d",&Movie_Rating.Movie)
            }
            else if (Rate < 0 )
            {
                printf("Invalid Input");
                break;
            }
            else
            {
                printf("Invalid Input");
            }

}
