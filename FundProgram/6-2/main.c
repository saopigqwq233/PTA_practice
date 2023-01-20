#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;

    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}
double f( int n, double a[], double x )
{
    //递归做法n很大时时间超出
    /* if(n==0)
         return a[0];
     else
     {
         double ret=1;
         for (int i = 0; i < n; ++i)
         {
             ret=x*ret;
         }
         return ret*a[n]+ f(n-1,a,x);
     }*/
    double sum=0;
    double powx=1;
    for (int i = 0; i <=n; ++i)
    {
        sum+=a[i]*powx;
        powx*=x;
    }
    return sum;
}