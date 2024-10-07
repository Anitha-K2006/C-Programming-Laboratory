#include<stdio.h>
int main()
{
    int OC,NP;
    int tax,percentage;
    printf("Enter Net Price and Original cost:\n");
    scanf("%d%d",&NP,&OC);
    tax=NP-OC;
    percentage=(tax*100)/OC;
    printf("%d percentage",percentage);
    return 0;
}

