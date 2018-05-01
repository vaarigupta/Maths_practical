#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float x , xn ,fx ,dfx;
    int n ,i;
    printf("enter the value for x0 -> ");
    scanf("%f",&x);

    printf("enter the no of times the loop needs to be run : ");
    scanf("%d",&n);
    if(dfx!=0){
        for(i=0;i<n;i++)
    {
        fx = exp(x) +log(x);
        dfx = exp(x) + 1/x;
        xn = x - (fx/dfx);
        printf("the root of the eq : %f\n",xn);
        x = xn;
    }

    }
    else
    {
        printf("error");
    }

}
