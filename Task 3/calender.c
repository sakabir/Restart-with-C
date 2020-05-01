#include<stdio.h>
int main()
{
    int a,b,d,y,m;
    scanf("%d", &a);
    y= a/365;
    b= a%365;
    m=b/30;
    d= m%30;
    printf("%d Years:%d Months:%d Days",y,m,d);
    return 0;
}
