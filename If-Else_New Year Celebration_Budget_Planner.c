#include <stdio.h>

int main() {
int budget,numGuests,foodCostPerGuest,decorationCost,musicCost,extraExpenses,totalcost;
   scanf("%d\n%d\n%d\n%d%d\n%d",&budget,&numGuests,&foodCostPerGuest,&decorationCost,&musicCost,&extraExpenses);
    totalcost =
        foodCostPerGuest*numGuests
        +decorationCost
        +extraExpenses+
        musicCost;
    if((totalcost <=budget) && (numGuests>5 && numGuests<=50) && 
       ( (decorationCost< (0.3*budget)) || ( (foodCostPerGuest*numGuests)<(0.5*budget) )  ) ){
        if(numGuests>25 ){  
          // musicCost <= budget - totalcost;
            if(musicCost>0){     
        printf("Celebration Approved");}
            else{
               printf("Celebration Denied"); 
            }
        }
        else{
            printf("Celebration Approved");               
           }
     
    }
    else   
    {
        printf("Celebration Denied");
    }
    return 0;
}