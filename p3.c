#include <stdio.h>
int main()
{
  int n,i,j,k;
   printf("Enter the any value:= ");
   scanf("%d",&n);
   
  for(i=n; i>=1; i--)
  {
      for(j=n; j>=i; j--)
      {
        printf("%d",j); 
      }
      printf("\n");
  }
    return 0;
}