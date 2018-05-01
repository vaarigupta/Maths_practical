#include<stdio.h>
#include<conio.h>
void main()
{
    float a , b , h , x , fx , fa , fb , sum =0 , I;
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
        sum +=fx;
    }
     I = (h/2)*((fa + fb)+ 2*sum);
     printf("hence the Integral value by numerical integration -> %f ",I);

}
