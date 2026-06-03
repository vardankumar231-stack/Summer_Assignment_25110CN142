//write a program to find sum of digits of a number.


#include<stdio.h>
int main(){
    int n,sum=0,i;

    printf("enter the no ");
    scanf("%d",&n);

    while(n!=0){
        i=n%10;
        sum=sum+i;
        n=n/10;
    }

        printf("the sum of digits is %d",sum);

    return 0;
}

