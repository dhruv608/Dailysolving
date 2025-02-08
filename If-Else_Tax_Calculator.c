#include <stdio.h>

int main() {

   float inc,new;
    int num;
    scanf("%f",&inc);
    if(inc>=0){
        
    
    if( inc<=250000 ){
        new=0;
         printf("%.2f",new);
    }
    else if(inc<=500000 && inc>250000){
        num=inc-250000;
        new=num*0.05;
         printf("%.2f",new);
    }
    else if(inc<=1000000 && inc>500000){
        num=inc-500000;
        new=num*0.2 +250000*0.05;
         printf("%.2f",new);
    }
    else if(inc>1000000){
        num=inc-1000000;
        new=num*0.3 +500000*0.2 + 250000*0.05;
         printf("%.2f",new);
    } 
        
        }
    
      else{
       printf("INVALID");
    }
    return 0;
}