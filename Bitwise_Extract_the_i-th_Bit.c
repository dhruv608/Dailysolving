#include <stdio.h>

int main()
{
    int n;
    int i;
    scanf("%d %d",&n,&i);
    int res = (n>>i)&1;
printf("%d",res);
    return 0;
}