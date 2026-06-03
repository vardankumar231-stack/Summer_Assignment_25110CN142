////write aprogram to find product of digit

#include<stdio.h>
int main(){
int n,digit,multiply=1;

printf("enter the number");
scanf("%d",&n);

if(n==0){
printf("the multiplication of digit is 0");
}
else{
while(n != 0){
digit=n % 10;
multiply= multiply * digit;
n =n / 10;

}
printf("the multiplication of digit is %d",multiply);
}
return 0;
}
