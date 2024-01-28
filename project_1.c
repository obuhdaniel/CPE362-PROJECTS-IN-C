#include <stdio.h>

int main(){

    char first_name[50];
    char last_name[50];
    char middle_name[50];
    int i;
    
    printf("\t   Welcome to Student Management System\n ");
    
    printf("\n \t  Use your Enter Key to enter your data\n \n");
    
    printf("Enter Your First Name: \t");
    scanf("%s", &first_name);
     printf("Enter Your Middle Name:\t");
    scanf("%s", &middle_name);
     printf("Enter Your Last Name: \t");
    scanf("%s", &last_name);
    
   
     printf("Thank You for entering You data, wait whilr we process");
     
     for(i = 0; i < 10; i++){
         
         printf("\n Loading...");
         
     }
     
     
     
     printf(" \t \nWelcome User 1, Your Entry has been saved Successfully\n  ");
   
     
     
     printf("\t \nFirst Name: \t %s", first_name);    
     
      printf("\t \nMiddle Name: \t %s", middle_name);        
    printf("\t \nLast Name: \t %s", last_name);
    
    
}
