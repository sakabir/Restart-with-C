#include<stdio.h>
int main()
{
    float h;
    scanf("%f", &h);
    if (h<=90)
        printf("Short");
    else if (h>90 && h<=110)
        printf("Medium");
    else printf("Tall");
    return 0;
}
