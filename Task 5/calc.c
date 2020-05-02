#include <stdio.h>
int main()
{
    char calc;
    double n1, n2,r;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    printf("Select (+, -, *,/): ");
    scanf("%c", &calc);

    switch (calc) {
    case '+':
        r=n1+n2;
        break;
    case '-':
       r=n1-n2;
        break;
    case '*':
        r=n1*n2;
        break;
    case '/':
        r=n1/n2;
        break;
    }
    printf("%.6lf", r);

    return 0;
}
