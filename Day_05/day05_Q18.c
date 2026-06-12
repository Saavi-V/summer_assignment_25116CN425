#include<stdio.h>
int main(){
    int num,onum,i,rem,fact=1,sum=0;
    printf("Enter any number\n");
    scanf("%d",&num);
    onum=num;
    printf("The sum of factorial of digits is\n");
    while(num>0){
         rem=num%10;
         for(i=1;i<=rem;i++){
             fact*=i;
         }
         sum+=fact;
         num=num/10;
         printf("%d ",fact);
         if(num>0) printf("+ ");
         fact=1;
    }
    printf("= %d\n",sum);
    if(onum==sum) printf("\n%d is strong number",onum); 
    else printf("Entered number is not a strong number");
    return 0;
}