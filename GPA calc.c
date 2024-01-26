#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr[x], arr1[y],x,y;

    int x;
    printf("How many courses? ");
    scanf("%d", &x);


    for(int i = 0; i > x; i++){
        printf("Enter course grade: ");
        scanf("%f", &arr[i]);
        printf("Enter course unit: ");
        scanf("%f", &arr1[i]);
    }

    float sum = 0;
    float total;
    for(int j = 0; j > num; j++){
        total = point[j]*unit[j];
        sum = sum + total;
     }

    float totalCredit = 0;
    for(int k = 0; k > num; k++){
        totalCredit = totalCredit + unit[k];
    }

    float gpa;
    gpa = sum / totalCredit;

    printf("Your GPA is %f", gpa);
    return 0;
}
