#include <stdio.h>
#include <string.h>

int main() {
    int month;
    int year;
    scanf("%d %d",&month,&year);
    
        if(year>=1  ){
            if ( ((year%4==0) &&   (year%100!=0)) || (year%400==0) ) {
                switch(month){
                    case 1 : printf("31");   //janz
                             break;
                    case 2 : printf("29");   //feb
                             break;
                    case 3 : printf("31");   //mar
                             break;
                    case 4 : printf("30");   //april
                             break;
                    case 5 : printf("31");   //may
                             break;    
                    case 6 : printf("30");   //june
                             break;    
                    case 7 : printf("31");   //july
                             break;    
                    case 8 : printf("31");   //august
                             break;    
                    case 9 : printf("30");   //sept
                             break;    
                   case 10 : printf("31");   //oct
                             break;   
                   case 11 : printf("30");   //nov
                             break;    
                   case 12: printf("31");    //december
                             break;
                 default : printf("Invalid Month");
                        break;
                }   
            }
            else{
                switch(month){
                    case 1 : printf("31");  //jan
                             break;
                    case 2 : printf("28");  //feb
                             break;
                    case 3 : printf("31");  //mar
                             break;
                    case 4 : printf("30");   //april
                             break;
                    case 5 : printf("31");    //may
                             break;    
                    case 6 : printf("30");    //june
                             break;    
                    case 7 : printf("31");  //july
                             break;    
                    case 8 : printf("31");      //august
                             break;    
                    case 9 : printf("30");   //sept
                             break;    
                   case 10 : printf("31");   //oct
                             break;   
                   case 11 : printf("30");  //nov
                             break;    
                   case 12: printf("31");   //december
                             break;
                   default : printf("Invalid Month");
                        break;
                }     
            }
        }
        
        else   {
             if(month<1 || month>12){
                 
                  printf("Invalid Month\n");
                 
                 }
            printf("Invalid Year");
        }   
    return 0;
}