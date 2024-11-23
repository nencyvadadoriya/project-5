#include <stdio.h>
int main()
{
  int n,i,j,k,s;
   printf("Enter the any value:= ");
   scanf("%d",&n);
   for(i=1; i<=n; i++)
   {
       for(k=1; k<=n-i; k++)
       {
           printf(" ");
       }
       for(j=1; j<=i;j++)
       {
           printf("%d",j);
       }
        printf("\n");
   }
   for(i=n-1; i>=1; i--)
   {
         for(s=1; s<=n-i; s++)
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