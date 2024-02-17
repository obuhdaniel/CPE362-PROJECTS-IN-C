

#include <stdio.h>

int main(){
    
    int number, range_end;
    printf("Enter Number Which you want to Get Table for: ");
    scanf("%d", &number );
     printf("Enter Range up to where you want to Get Table for: ");
    scanf("%d", &range_end );
    
    printf("\t This is a %d X %d multiplication table ", number, range_end);
    
    
   int i = 1;
    
    while (i <= number){
        
        int j = 1;
        
        while (j <= range_end ){
            
         int pro2 = i*j;
         printf("%d x %d   = %d\n ", i, j, pro2);
         j++;
        
        }
       
        
        i++;
        printf("\n");
        
    }
    
    
}