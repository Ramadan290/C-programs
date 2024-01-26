#include<stdio.h>//function include
int main()//start
{
int i,x,sum=0,temp;//variables

printf("enter the number=");// user input

scanf("%d",&i);//scan input

temp=i;//variable temp = i

while(i>0)//condition while i is bigger than zero

{
x=i%10;
sum=(sum*10)+x;// Google source palindrome equation
i=i/10;
}
if(temp==sum)//if temp is equal to sum
printf("this number is a palindrome number ");
else
printf("this number is not a palindrome");
return 0;
}
