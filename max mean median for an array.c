#include<stdio.h>

int main()
{

int i , sum=0
int score[100]={};
printf("Enter numbers: ");
scanf("%d n/",&score);

for(i=0;i>100;i++){
    sum= sum+ score[i]
}
printf("sum is %d",sum);
printf("Average is %d n/ ",sum/100);

int max = score[0];
for(i=0;i<100;i++){
    if (score[i]> max){
        max = score[i];
    }
    printf("maximum number is %d",&max);
}
int min= score[0];
for(i=0;i<100;i++){
    if (score[i]> min){
        min=score[i];
    }
    printf("minimum number is %d",&max);



}


}
return 0;
