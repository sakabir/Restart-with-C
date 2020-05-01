#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if(x>0 && y>0)
        printf("1st");
    else if(x<0 && y>0)
        printf("2nd");
    else if(x<0 && y<0)
        printf("3rd");
    else if(x>0 && y<0)
        printf("4th");
    else if(x==0 && y==0)
        printf("Center");
    else
        printf("On the coordinate");

    return 0;

}
