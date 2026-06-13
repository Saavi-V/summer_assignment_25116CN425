#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter max number for base of triangle\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}