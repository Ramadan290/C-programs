#include <stdio.h>

float calc_male(float height , float weight)
{
    float BMI,i;

    BMI = weight / (height * height);
    printf("Your BMI is %f\n", BMI);


    for(i=0;BMI>i;i++)
    {
if(BMI<=18.5)
   {
       printf("Underweight");
   }
    else if(BMI>18.5 && BMI<24.9)
   {
       printf("normal");
   }
    else if(BMI>25.0 && BMI<29.9)
   {
      printf("overweight");
   }
   else if(BMI>30)
   {
       printf("obese");
   }
   else if (BMI<0.00)
   {
       printf("Invalid Input");
       break;
   }
   else
   {

   }
}
   return 0;
}


float calc_female(float height , float weight)
{
    float BMI,i ;

    BMI = weight / (height * height);
    printf("Your BMI is %f\n", BMI);

for(i=0;i<BMI;i++)
{

 if(BMI<=18.5)
   {
       printf("Underweight");
   }
    else if(BMI>18.5 && BMI<=23.0)
   {
       printf("normal");
   }
    else if(BMI>23.0 && BMI<=28.2)
   {
      printf("overweight");
   }
   else if(BMI>30)
   {
       printf("obese");
   }
   else if (BMI<0.00)
   {
       printf("Invalid Input");
       break;
   }
   else
   {

   }
   return 0;
   }
}

int main()
{
    float M , F , gender , height, weight, BMI,x,y,i;

    printf("Enter height in meter:\n");
    scanf("%f", &height);

    printf("Enter weight in kg:\n");
    scanf("%f", &weight);


    printf("Enter gender (M for male & F for female):\n");
    scanf("%f", &gender);

    for(i=0;i<gender;i++)
    {
        if(gender==M)
        {
            x=calc_male(height,weight);
        }
        else if (gender==F)
        {
            y=calc_female(height,weight);
        }
        else if(gender!=M && gender!=F)
        {
            printf("invalid input");
            break;
        }
        else{}
    }
    return 0;

}


