#include<stdio.h>
#include<math.h>
int main()
{
    double p,r, t;
    double amount,CI;
    scanf("%lf%lf%lf",&p,&r,&t);
    amount=p*((pow((1+r/100),t)));
    CI=amount-p;
    printf("%lf",CI);
    return 0;
}

