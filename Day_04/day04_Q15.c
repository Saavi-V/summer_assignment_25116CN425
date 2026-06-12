#include<stdio.h>
#include<math.h>
int main(){
    int num,num1,ogn,rem,cnt=0,sum=0;
    printf("Enter any number\n");
    scanf("%d",&num);
    ogn=num1=num;
    
    while(num>0){
         num=num/10;
         cnt++;
    }
    while(num1>0){
         rem=num1%10;
         num1=num1/10;
         sum=sum+(int)round(pow(rem,cnt));
    }
    if(ogn==sum) printf("Armstrong number is %d",ogn);
    else printf("%d is not an Armstrong number",ogn);
    return 0;
}