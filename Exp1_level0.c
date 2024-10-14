#include<stdio.h>
int main()
{
    int num1,num2,num3;
    int sum;
    float avg;
    printf("Enter Three Integers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("Sum of %d,.%d.and .%d.:.%d\n",num1,num2,num3,sum);
    avg=sum/3.00;
    printf("Average .of.%d,.%d.and.%d.:.",num1,num2,num3);
    printf("%f",avg);
    return 0;
}
