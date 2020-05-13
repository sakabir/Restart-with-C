#include <stdio.h>
int main()
{
  int n, n1 = 0, n2 = 1, N, c;

  printf("number of elements\n");
  scanf("%d", &n);

  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      N = c;
    else
    {
      N = n1 + n2;
      n1 = n2;
      n2 = N;
    }
    printf("%d\n", N);
  }

  return 0;
}
