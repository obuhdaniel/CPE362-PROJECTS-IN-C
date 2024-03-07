#include <stdio.h>

int main(){
    int days, year, weeks;
    
    printf("\n\n\nYou just woke up from a time loop, this program helps you claculate how many years, months and weeks you have missed\n\n");

    printf("How many days have you been awake\n");

    scanf("%d", &days);
    

    year = days/365;
    weeks = (days % 365)/7;
    days = days- ((year*365) + (weeks*7));

    printf("Years: %d\n", year);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);

    return 0; 
    
}
