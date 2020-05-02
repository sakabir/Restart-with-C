#include<stdio.h>
#include<string.h>
int main()
{
   // try to maintain a consistant spacing.
   //  any inner scope should be 2 or 4 space latter then the initial.
   char w[500];
   int i;
   scanf("%s", w);

   for (i = 0; w[i]!='\0'; i++)
   {
      if(w[i] >= 'a' && w[i] <= 'z')
         w[i] = w[i] - 32;
      else if(w[i] >= 'A' && w[i] <= 'Z')
         w[i] = w[i] + 32;
      else printf("Not a word"); 
   }
   printf("%s", w);
   return 0;
}
