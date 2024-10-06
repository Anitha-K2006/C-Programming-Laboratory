#include<stdio.h>
int main()
{
    int Tam,Eng,Mat,Sci,Soc;
    int Total;
    float Avg;
    printf("Tamil Mark:");
    scanf("%d",&Tam);
    printf("English Mark:");
    scanf("%d",&Eng);
    printf("Maths Mark:");
    scanf("%d",&Mat);
    printf("Science Mark:");
    scanf("%d",&Sci);
    printf("Social Mark:");
    scanf("%d",&Soc);
    Total=Tam+Eng+Mat+Sci+Soc;
    printf("Total Mark %d\n",Total);
    Avg=Total/5;
    printf("Average %.2f\n",Avg);
    if(Total>=490 && Total<=500)
    {
        printf("O grade!!");
    }
    else if(Total>=470 && Total<=489)
    {
        printf("A+ grade!!");
    }
    else if(Total>=440 && Total<=469)
    {
        printf("A grade!!");
    }
    else if(Total>=400 && Total<=439)
    {
        printf("B+ grade!!");
    }
    else if(Total>=350 && Total<=399)
    {
        printf("B grade!!");
    }
    else if(Total>=300 && Total<=349)
    {
        printf("C+ grade!!");
    }
    else if(Total>250 && Total<=299)
    {
        printf("C grade");
    }
    else if(Total<=250 && Total>=0)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid Marks");
    }
    if(Tam>=50 && Eng>=50 && Mat>=50 && Sci>=50 && Soc>=50)
    {
        printf("Student Cleared The Exam");
    }
    else
    {
        printf("Fail the exam");
    }
    return 0;
}
