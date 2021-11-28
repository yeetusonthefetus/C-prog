#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num<0){
        printf("Please enter a valid number");
    }
    else if (num==0){
        printf("1\n");
    }
    else {
        int i,prev=1;
    for (i=1;i<num+1;i++){
        prev=prev*i;


    }
    printf("%d factorial is: %d\n",num,prev);
    
    }
    return 0;
}