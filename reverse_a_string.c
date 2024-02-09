#include <stdio.h>
#include<string.h>

int main(){
    
   char word[50];
   
   
   printf("This is a program to reverse a string \n");
   fgets(word,50,stdin);
   
   int len = strlen(word) -1;
   

   

      printf("Original: %s\n", word);
      printf("Reversed: ");
  
   
  
   int i;
    for (i=len;i>=0;i--){
        printf("%c", word[i]);
    }
    
}