#include <stdio.h>

int main() {

    int path,action,run,num,win;
    scanf("%d",&path); 
    if(path==1){
        printf("Player chooses the Left path.\n");
          scanf("%d",&action);
        if(action==1){
            printf("Poor choice, Game Over!\n");
        }
        else if(action==2){
            printf("Player found a bridge.\n");
             scanf("%d",&run);
            if(run==1){
                printf("Player crosses the bridge safely.\n");
                scanf("%d",&win);
            }
            else if(run==2){
                 printf("Poor luck, Game Over!\n");
                
            }
        }
    }
    
    else if(path==2){
         printf("Player chooses the Middle path.\n");
        scanf("%d",&num);
        if( num>99 || num<1000){
        int x=num/100;
        int y=(num/10)%10;
        int z=num%10;
        if(       ((x+y+z)==15) && ( y == 4*z ) &&  (   x==(y-3)   ) ){
            printf("Player solved the puzzle.\n");
            scanf("%d",&win);
        }
              else {
          printf("Foolish player, Game Over!\n");
          }
        }
          else {
          printf("Foolish player, Game Over!\n");
          }
        
    }
    else if(path==3){
         printf("Player chooses the Right path.\n");
         scanf("%d",&num);
        if(num==30){
            printf("Player solved the puzzle.\n");
            scanf("%d",&win);
        }
        else{
            printf("Foolish player, Game Over!\n"); 
            
        }
}
if(win==1){
    printf("All that glitters is not gold, Game Over!");
}    
    else if(win==2){
        printf("All your efforts were for nothing, Game Over!");
    }
    else if(win==3){
        printf("Congratulations!! You won the treasure.");
    }
    return 0;
}