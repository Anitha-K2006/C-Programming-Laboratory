#include<stdio.h>
int main()
 {
    int units;
    float amt,total=0;
    printf("Units:");
    scanf("%d",&units);
    if(units>=1&&units<=50)
    {
        amt=units*0.5;
    }
    else if(units>=51&&units<=150)
    {
        amt=((50*0.5)+(units-50.0)*0.75);
    }
    else if(units>=151&&units<=250)
    {
        amt=((50*0.5)+(100*0.75)+(units-150.0)*1.2);
    }
    else if(units>250)
    {
        amt=((50*0.5)+(100*0.75)+(100*1.2)+(units-250.0)*1.50);
        total=0.2+amt;
        printf("%f",total);
        
    }
    else if(units<=0)
    {
        printf("Invalid");
    }
    printf("The Total Electricity bill%.2f",amt);
    return 0;
}

