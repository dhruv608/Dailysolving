#include <stdio.h>

int main() {
int n;
    int i;
    scanf("%d\n%d",&n,&i);
    n=(n^(1<<i));
    printf("%d",n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}