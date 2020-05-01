#include<stdio.h>
int main()
{
 int x1,x2,y1,y2;
 float d,distance;
 printf(" x1,y1:");
 scanf("%d %d",&x1, &y1);
 printf(" x2,y2:");
 scanf("%d %d", &x2,&y2);
 d= (x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1);
 distance= sqrt(d);
 printf("Distance: %f", distance);
 return 0;
}
