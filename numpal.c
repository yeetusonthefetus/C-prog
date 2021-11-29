#include <stdio.h>

void main(){
    int num,rev=0,temp,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while (temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    if (rev==num){
        printf("Entered number is a palindrome\n");
    }
    else {
        printf("Entered number is not a palindrome\n");
    }
}