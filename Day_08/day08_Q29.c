#include<stdio.h>
int main(){
    int i,j,h;
    printf("Enter height width of triangle\n");
    scanf("%d",&h);
    for(i=0;i<h+1;i++){
        for(j=0;j<i;j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
