#include <stdio.h>
int main() {
  int i,j,s,n;
  printf("enter the any number:= ");
  scanf("%d",&n);
  
  for(i=1; i<=n; i++)
  {
      for(s=1; s<=n-i; s++)
      {
          printf(" ");
      }
      for(j=i; j>=1; j--)
      {
          printf("%d",j);
      }
      printf("\n");
  }
    return 0;
}