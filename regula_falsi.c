#include<stdio.h>
#include<conio.h>
void main()
{
    float a , b,fa , fb , c,fc;
    int n , i;
    printf("enter the values for a and b : ");
    scanf("%f%f",&a,&b);
    fa = 2*a*a -4;
    fb = 2*b*b -4;
    if(fa*fb<0)
    {
        printf("Enter the no of times to run the loop");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            c=(a*fb - b*fa)/(fb-fa);
            printf("the root is %f \n",c);
            fc = 2*c*c -4;
            if(fc<0)
            {
                a=c;
            }
            else if(fc==0)
            {
               printf("its the root of the equation - %f",c);
            }
            else
            {
                b = c;
            }
        }
    }
    else
    {
        printf("no roots exist or mutiple roots");
    }


}

