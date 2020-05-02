#include<stdio.h>
#include<string.h>
int main()
{
    char w[500];
    int i;
      scanf("%s", w);

   for (i = 0; w[i]!='\0'; i++)
    {
      if(w[i] >= 'a' && w[i] <= 'z')
         w[i] = w[i] - 32;
   else w[i] = w[i] + 32;
   }
   printf("%s", w);
   return 0;
}
