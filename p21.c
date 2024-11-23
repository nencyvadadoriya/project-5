#include <stdio.h> 
int main() 
{ 
    int r=5,n;
    printf("enter the any value:= ");
    scanf("%d",&n);
    for (int i = 0; i <r; i++) { 
        for (int j=0; j<=i; j++) { 
            printf("%d ", n++); 
        } 
        printf("\n"); 
    } 
    return 0; 
}