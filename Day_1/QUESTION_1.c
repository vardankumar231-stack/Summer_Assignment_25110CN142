// sum of first natural numbers:

#include<stdio.h>
int main(){
    int i,n,sum=0;

    printf("enter the no of terms");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        sum=sum+i;
    }

    printf("sum of first n natural no is %d ",sum);

    return 0;
}