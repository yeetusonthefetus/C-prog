#include <stdio.h>

int main(){
    int fib;
    printf("Enter the number of values to be printed: ");
    scanf("%d",&fib);
    if (fib<1){
        printf("Please enter a valid number of values");
    }
    else if (fib==1){
        printf("0\n");
    }
    else {
        int count,term;
        int n1=0,n2=1;
        printf("\n%d %d",n1,n2);
        for (count=2;count<fib;count=count+1){
            term=n1+n2;
            printf(" %d",term);
            n1=n2;
            n2=term;     
        }
    }
    printf("\n");
    return 0;

}