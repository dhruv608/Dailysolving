#include <stdio.h>

int main() {

    
    
    int num;
    int cond=0;
    scanf("%d",&num);
    if(num>0){
        if(num%2==0 && num>10){
            cond+=1;
        }
        if(num%3==0 && num>15){
            cond+=1;
        }
        if(num%7==0){
            cond+=1;
        }
        
        switch(cond){
            case 0: printf("The verdict for the number %d is: NORMAL",num);
                break;
                
            case 1 : printf("The verdict for the number %d is: MAGICAL",num);
                break;
            case 2 : printf("The verdict for the number %d is: MIRACULOUS",num);
                break;
            case 3 : printf("The verdict for the number %d is: SUPERNATURAL",num);
                
        }
    }
    else{
        printf("The verdict for the number %d is: INVALID",num);
    }
    return 0;
}