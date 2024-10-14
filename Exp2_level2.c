#include<stdio.h>
int main()
{
    int n;
    float fine;
    printf("No Of Days:");
    scanf("%d",&n);
    if(n>=1&& n<=5)
    {
        fine=n*0.5;
    }
    else if(n>=6 && n<=10)
    {
        fine=((5*0.5)+(n-5.0)*1.0);
    }
    else if(n>10)
    {
        fine=(5*0.5)+(5*1.0)+((n-10.0)*5.0);
    }
    else if(n>30)
    {
        printf("The Membership is cancelled");
    }
    else if(n<=0)
    {
        printf("No Fine!!");
    }
    printf("Fine %.2f",fine);
    return 0;
    
    
}



