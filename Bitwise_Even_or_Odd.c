#include <stdio.h>

int main() {
int a;
    scanf("%d",&a);
    if((a&1)==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}