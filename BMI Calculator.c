#include <stdio.h>
#include<stdlib.h>

void calc_BMI(float height , float weight)
{
    float BMI  ;

    BMI = weight / (height * height);

    if (BMI<=18.5)
   {
       printf("Your BMI is %f\n", BMI);
       printf("Underweight \n \n");
   }
    else if(BMI>18.5 && BMI<24.9)
   {
       printf("Your BMI is %f\n", BMI);
       printf("Normal \n \n");
   }
    else if(BMI>25.0 && BMI<29.9)
   {
      printf("Your BMI is %f\n", BMI);
      printf("Overweight \n \n");
   }
   else
   {
       printf("Your BMI is %f\n", BMI);
       printf("Obese \n \n");
   }

   while (BMI>0.00)
   {
       void main();
       main();
   }
}



void main()
{
    float height, weight, BMI;

    printf("**********BMI Calculator**********\n");
    printf("\nEnter person's Information: \n \n");

    printf("Enter height (in meters):\n");
    scanf("%f", &height);

    printf("Enter weight (in kgs):\n");
    scanf("%f", &weight);

    if (height <0.00)
    {
        printf("*Program Stopped*");
        exit(0);
    }
    else{

    }
    if(weight<0.00)
    {
        printf("*Program Stopped*");
        exit(0);
    }
    else{

    }

    calc_BMI(height,weight);

}
