#include <stdio.h>
int main()
{
  int n,i,j;
   printf("Enter the any value:= ");
   scanf("%d",&n);
   
  for(i=n; i>0; i--)
  {
      for(j=1; j<=i; j++)
      {
        printf("%d",j); 
      }
      printf("\n");
  }
    return 0;
}
