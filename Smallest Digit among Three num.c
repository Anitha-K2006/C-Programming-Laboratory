#include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if(num1<num2  && num1<num3)
    {
        printf("%d is the smallest",num1);
    }
    else if(num2<num1 && num2<num3)
    {
        printf("%d is the smallest",num2);
    }
    else if(num3<num1 && num3<num2)
    {
        printf("%d is the smallest",num3);
    }
    return 0;
}
