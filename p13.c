#include <stdio.h>
int main()
{
  int n,i,j;
   printf("Enter the any value:= ");
   scanf("%d",&n);
   
  for(i=n; i>=1; i--)
    {
      for(int s=1; s<=n-i; s++)
      {
        printf(" "); 
      }
     for(j=1; j<=i; j++)
     {
         printf("%d",j+(n-i));
     }
     printf("\n");
    }
    return 0;
}
