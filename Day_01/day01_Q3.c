#include<stdio.h>
int main()
{   int i,n,fact=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n==0) fact=1;
    for(i=1;i<=n;i++){
       fact=fact*i;
    }
    printf("Factorial of a given no is %d",fact);
    return 0;
}
