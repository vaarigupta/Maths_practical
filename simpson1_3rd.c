#include<stdio.h>
#include<conio.h>
void main()
{
    float a , b , h , x , fx , fa , fb , s1 , s2 , I;
    int n ,i;
    printf("Enter the value for a and b :");
    scanf("%f%f",&a,&b);
    printf("Enter the number of divisions");
    scanf("%d",&n);
    h = (b-a)/n;
    fa = 1/(1+(a*a));
    fb = 1/(1+(b*b));
    for ( i =1 ;i<n;i++)
    {
        x = a + i*h ;
        fx = 1/(1+(x*x));
        if(i%2==0)
        {
            s2+= fx;
        }
        else
        {
            s1+=fx;
        }

    }
     I = ( h/3)*((fa + fb)+ 4*s1 + 2*s2);
     printf("hence the Integral value by numerical integration -> %f ",I);

}

