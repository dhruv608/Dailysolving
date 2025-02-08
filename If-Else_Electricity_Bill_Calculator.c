#include <stdio.h>

int main() {
float n;
    float bill;
    float x;
    
    scanf("%f",&n);
    
    if(n>=0){
    
            if(n<=100){
                bill = n*5; 
                if(bill<=1200){
                    bill = bill -bill*0.1;
                }
                else{
                    bill =bill;
                }
            }
             else if(n>=100 &&  n<=300){
                x = n - 100;
                bill = 500 + x*7;
                 if(bill<=1200){
                    bill = bill -bill*0.1;
                }
                else{
                    bill =bill;
                }
            }
             else{
                 x= n-300;
                 bill = 500 + 1400 + x*10; 
                 if(bill<=1200){
                    bill = bill -bill*0.1;
                }
                else{
                    bill =bill;
                }
             }  
        printf("The electricity bill is: %.2f.",bill);
    }
    else{
        printf("Invalid Input!");
    }
    return 0;
}