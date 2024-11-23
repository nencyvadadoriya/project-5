#include <stdio.h>
int main()
{
  int n,i,j,k;
   printf("Enter the any value:= ");
   scanf("%d",&n);
   for(i=n; i>0; i--)
   {
       for(j=n; j>=i;j--)
       {
           printf("%d",i);
   }
   printf("\n");
   }
    return 0;
}
