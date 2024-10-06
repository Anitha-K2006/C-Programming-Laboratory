#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0 && year%100 !=0)
    {
        printf("The Year is leap");
    }
    else
    {
        printf("The year is not a leap year");
    }
    return 0;
}
