#include <stdio.h>
int main()
{
    char calc;
    double n1, n2,r;
    printf("Enter two numbers: ");
    scanf("%lf%lf", &n1, &n2);

    printf("Select (+, -, *,/): ");
    scanf(" %c", &calc); // add a space before the '%c'. 
    // Otherwise it consider any chareecter such as the new line as input
    // and does not wait to read anymore.


    // adding a tab space inside the switch is a good practice
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
    printf("%.6lf\n", r);

    return 0;
}
