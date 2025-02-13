#include <stdio.h>

int main() {
    int n;
    int a, b, c, A, B, C;
    scanf("%d", &n);

    if (n == 3 ) {
        scanf("%d %d %d %d %d %d", &a, &b, &c, &A, &B, &C);
        if (a + b > c && b + c > a && a + c > b && A + B + C == 180 && a>0 && b>0 && c>0  && A>0 && B>0  && C>0) { 
            if (a == b && b == c && A == 60 && B == 60 && C == 60 ) {
                printf("Equilateral Triangle\n");
            } else if ((a == b && b != c && A==B && B!=C ) || (b == c && a != c  && B==C && A!=C) || (a == c && b != a  && A==C && B!=A)) {
                printf("Isosceles Triangle\n");
                
            } 
            else if(a!=b && b!=c && a!=c && A!=B && B!=C && A!=C) {
                printf("Scalene Triangle\n");
            }
             else {
            printf("Invalid Figure\n");
        }
        } else {
            printf("Invalid Figure\n");
        }
        
    } else if (n == 4 ) {
        int d, D;
        scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &A, &B, &C, &D);
        if (A + B + C + D == 360  && a>0 && b>0 && c>0 && A>0 && B>0  && C>0  && D>0  && d>0 ) { 
            if (A == 90 && B == 90 && C == 90 && D == 90  ) {
                if (a == b && b == c && c == d) {
                    printf("Square\n");
                } else if (a == c && b == d) {
                    printf("Rectangle\n");
                } else {
                    printf("Invalid Figure\n");
                }
            } else if ((a == b && b == c && c == d) && (A == C && B == D) && (A != 90 || B != 90)) {
                printf("Rhombus\n");
            } else if ((a == c && b == d) && (A == C) && (B == D)) {
                printf("Parallelogram\n");
            } else {
                printf("Invalid Figure\n");
            }
        } else {
            printf("Invalid Figure\n");
        }
    } else if (n == 0) {
        printf("Circle\n");
    } else {
        printf("Invalid Figure\n");
    }

    return 0;
}
