#include<stdio.h>
int main()
{
    int BP;
    float Bonus,TA,Netsalary;
    printf("Salary:");
    scanf("%d",&BP);
    if(BP>=0 && BP<=10000)
    {
        Bonus=BP*2/100.0;
        TA=BP*1/100.0;
        printf("Bonus:%.2f\n",Bonus);
        printf("Travelallowances:%.2f\n",TA);
        Netsalary=BP+Bonus+TA;
        printf("Net Salary:%.2f\n",Netsalary);
    }
    else if(BP>=10001 && BP<=25000)
    {
        Bonus=BP*5/100.0;
        TA=BP*2/100.0;
        printf("Bonus:%.2f\n",Bonus);
        printf("Travelallowances:%.2f\n",TA);
        Netsalary=BP+Bonus+TA;
        printf("Net Salary:%.2f\n",Netsalary);
    }
    else if(BP>=25001 && BP<=50000)
    {
         Bonus=BP*10/100.0;
        TA=BP*3/100.0;
        printf("Bonus:%.2f\n",Bonus);
        printf("Travelallowances:%.2f\n",TA);
        Netsalary=BP+Bonus+TA;
        printf("Net Salary:%.2f\n",Netsalary);
    }
    else if(BP>=50001 && BP<=100000)
    {
         Bonus=BP*15/100.0;
        TA=BP*5/100.0;
        printf("Bonus:%.2f\n",Bonus);
        printf("Travelallowances:%.2f\n",TA);
        Netsalary=BP+Bonus+TA;
        printf("Net Salary:%.2f\n",Netsalary);
    }
    else if(BP>100000)
    {
        Bonus=BP*20/100.0;
        TA=BP*5/100.0;
        printf("Bonus:%.2f\n",Bonus);
        printf("Travelallowances:%.2f\n",TA);
        Netsalary=BP+Bonus+TA;
        printf("Net Salary:%.2f\n",Netsalary);
    }
    return 0;
}
