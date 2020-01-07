#include<stdio.h>
int main()
{
    double a;
    double b;
    double c;
    printf("please input something:");
    scanf("%lf %lf",&a,&b);
    c=(a+b)*(a+b);
    printf("%1f\n",c);
}