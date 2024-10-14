#include<stdio.h>
#include<math.h>
int main()
{
    int opt;
    int a,b,res;
    printf("Options:\n");
    scanf("%d%d",&a,&b);
    scanf("%d",&opt);
    switch(opt)
    {
    
      case 1:
      {
        printf("Addition");
        res=a+b;
        break;
      }
      case 2:
      {
        printf("Subraction");
        if(a>b)
        
        {
            res=a-b;
            break;
        }
        else
        {
            res=b-a;
            break;
        }
      }
      case 3:
      {
        printf("Multiplication");
        res=a*b;
        break;
      }
      case 4:
      {
        printf("Division");
        res=a/b;
        break;
      }
      case 5:
      {
        printf("Modulus");
        res=a%b;
        break;
      }
      case 6:
      {
        printf("Average");
        res=(a+b)/2;
        break;
      }
      case 7:
      {
        printf("Power");
        res=pow(a,b);
        break;
      }
    }
    printf("%d",res);
    
    return 0;
}
        
        
        
        
        
        
        
        
        
        
    


