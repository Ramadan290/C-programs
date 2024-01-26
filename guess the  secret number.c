#include<stdio.h>
#include<stdlib.h>
int main()
{
   int secretnumber = 8;
   int guess;

   while(guess != secretnumber)
    {
        printf("Enter a number: ");
        scanf("%d", &guess);
   }
   printf("correct number guessed");


   return;
}
