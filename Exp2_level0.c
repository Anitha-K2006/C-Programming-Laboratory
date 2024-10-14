#include<stdio.h>
int main()
{
    int year;
    printf("year\n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||(year%400==0))
    {
        printf("The Year %d is the leap year",year);
    }
    else
    {
        printf("The Year %d is not a Leap year",year);
    }
    return 0;
}
