#include <stdio.h>

int main() {

    int h;
    int t;
    int res;
    float c;
    scanf("%d %f %d" ,&h,&c,&t);
    
    // if( ( (h>=0)&&(h<= 500) ) && (  (0.0<=c)&&(c<=1.0) ) &&(  (t>=0) && (t<=50000) ) ){
        
    if(h>50 && c<0.7f  && t>5600 ){
            res=10;
        printf("The grade of the steel is: %d\n",res);
        printf("All of the conditions met.");
        }
 
              else if (h>50 && t>5600){
        res=7;
        printf("The grade of the steel is: %d\n",res);
           printf("Two conditions met.");
    }
        
              else if(c<0.7f && t>5600){
        res=8;
        printf("The grade of the steel is: %d\n",res);
        printf("Two conditions met.");
    }
        
               else if(h>50 && c<0.7f ){
        res=9;
        printf("The grade of the steel is: %d\n",res);
        printf("Two conditions met.");
    }
   
                 else    if( h>50 || c<0.7f || t>5600 ){
        res=6;
        printf("The grade of the steel is: %d\n",res);
         printf("Only one condition met.");
    }
        
    else{
        res=5;
        printf("The grade of the steel is: %d\n",res);
        printf("None of the conditions met.");
    }
    // }
   
     
        return 0;
}