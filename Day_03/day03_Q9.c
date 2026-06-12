#include<stdio.h>
int main(){
    int num,i;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num<=1){
        printf("Not prime");
        return 1;
    }    
    for(i=2; i<num ;i++){
         if (num%i==0){
            printf("Not Prime"); 
            return 2;
         }   
    }
    printf("Prime");
    return 0;
} 
