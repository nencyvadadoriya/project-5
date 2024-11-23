#include <stdio.h>

int main()
{
 int n,i,j,l;
 printf("enter the any value:= ");
 scanf("%d",&n);
 
 for(i=0; i<=n; i++)
  {
      l=45;
      for(j=0; j<=i; j++)
      {
          printf("%d",l+j);
      }
      printf("\n");
  }

    return 0;
}
