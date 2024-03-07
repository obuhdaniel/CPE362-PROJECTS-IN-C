#include <stdio.h>

int main(){
    int amt, t_1000,t_500, t_200, t_100, t_50, t_20, t_10, t_5;
    double length;
    printf("\n\n\nProgram to break Naira notes\n\n");

    printf("Enter your amount\n");

    scanf("%d", &amt);

    t_1000 = (int)amt/1000;
    amt = amt-(t_1000*1000);

    t_500 = (int)amt/500;
    amt = amt-(t_500*500);

    t_200 = (int)amt/200;
    amt = amt-(t_200*200);

    t_100 = (int)amt/100;
    amt = amt-(t_100*100);

    t_50 = (int)amt/50;
    amt = amt-(t_50*50);

    t_20 = (int)amt/20;
    amt = amt-(t_20*20);

    t_10 = (int)amt/10;
    amt = amt-(t_10*10);

    t_5 = (int)amt/5;
    amt = amt-(t_5*5);




    printf("You have %d  N1000 note(s) \n \n", t_1000);
    printf("You have %d  N500 note(s) \n \n", t_500);
    printf("You have %d  N200 note(s) \n \n", t_200);
    printf("You have %d  N100 note(s) \n \n", t_100);
    printf("You have %d  N50 note(s) \n \n", t_50);
    printf("You have %d  N20 note(s) \n \n", t_20);
    printf("You have %d  N10 note(s) \n \n", t_10);
    printf("You have %d  N5 note(s) \n \n", t_5);
    printf("And N%d \n \n", amt);

    return 0;

}
