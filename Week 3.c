#include<stdio.h>
#include<math.h>
int main()
{
    int x,  arr[0] , size , i , max;

    printf("Enter array size: ",size);
    scanf("%d",&size);

    arr[size];

    printf("Enter array Elements: \n ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            printf("max==arr[i]");
        }
    }
    return 0;
}
