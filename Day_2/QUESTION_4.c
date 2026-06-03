//write a program to check whether a no is palindrom

#include <stdio.h>

int main() {
    int num, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (num == rev)
        printf("%d is a Palindrome number\n", num);
    else
        printf("%d is not a Palindrome number\n", num);

    return 0;
}   

