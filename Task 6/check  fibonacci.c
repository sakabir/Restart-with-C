#include <stdio.h>
  int main() {
        int n, n1 = 0, n2 = 1, N, flag = 0;

        printf("Enter number:");
        scanf("%d", &n);

        if (n == n1 || n == n2) {
                printf("%d is an element of Fibonacci series\n", n);
                return 0;
        }

        while (n2 <= n) {
                N = n2;
                n2 = n1 + n2;
                n1 = N;
                if (n2 == n) {
                        flag = 1;
                        break;
                }
        }


        if (flag) {
                printf("%d is an element of Fibonacci series\n", n);
        } else {
                printf("%d is not an element of Fibonacci series\n", n);
        }
        return 0;
  }
