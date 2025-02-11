#include <stdio.h>

int main() {
int n;
    int i;
    scanf("%d\n%d",&n,&i);
    n=(n&(~(1<<i)));
    printf("%d",n);
    return 0;
}