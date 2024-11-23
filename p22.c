#include <stdio.h>
int main()
{
  int n,i,j,k;
   printf("Enter the any value:= ");
   scanf("%d",&n);
    char l='A';
   for(i=n; i>0; i--)
   {
       for(j=n; j>=i;j--)
       {
           printf("%c",l);
        }
        l++;
   printf("\n");
   }
    return 0;
}