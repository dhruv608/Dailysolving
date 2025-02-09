#include <stdio.h>

int main() {
    int a , b ,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a){
       printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.");
        }
    
    else if(a==b || b==c || c==a){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.");
    }
    else if((b-a)==1 && (c-b)==1 && (c-a)==2){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }
    else if(a!=b && b!=c && c!=a){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}