#include <stdio.h>
int main()
{
 int n,i,j,s;
 printf("enter the any value:= ");
 scanf("%d",&n);
 
 for(i=n; i>=1; i--)
  {
      for(s=1; s<=n-i; s++)
       {
           printf(" ");
       }
      for(j=1; j<=i; j++)
      {
          printf("%d",j);
      }
      printf("\n");
  }

    return 0;
}