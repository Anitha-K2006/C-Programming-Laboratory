#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num&1==1)
    {
        printf("%d is the odd number",num);
    }
    else
    {
        printf("%d is not the odd number",num);
    }
}
