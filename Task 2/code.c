#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d %d", &a,&b);
c= b%a;
d= b/a;
printf("Remainder of %d and %d is: %d\n", b,a,c);
printf("Quotient of %d divided by %d is: %d\n", b,a,d);
return 0;
}
