#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num<=0){
        printf("Enter a positive number");
        return 1;
    }
    for(i=1;i<=num/2;i++){
         if(num%i==0){
             sum+=i;
         }
    }
    if(num==sum) printf("%d is a perfect number",num);
    else printf("%d is not a perfect number",num);
    return 0;
}
