#include <stdio.h>
#include <stdlib.h>
#include <time.h>

        int userinput();
        int computerinput();
        void checker(int userchoice, int computerchoice);
        

    int main() {


        srand(time(NULL));

        char yes1 = 'Y';
        int round = 0;
        int win = 0;
        int tie = 0;
        
        printf("*** Welcome to RPS Game ***\n");
        
        while (yes1 == 'Y' || yes1 == 'y') {
            yes1 == '\0';
            round++;
            
        int userchoice = userinput();
        int computerchoice = computerinput();
        
        


        switch (userchoice)
        {
        case 1:
            printf("You picked Rock!!\n");
            break;
        
        case 2:
            printf("You picked Paper!!\n");
            break;

        case 3:
            printf("You picked Scissor!!\n");
            break;
        }
        switch (computerchoice)
        {
        case 1:
            printf("Computer picked Rock!!\n");
            break;
        
        case 2:
            printf("Computer picked Paper!!\n");
            break;

        case 3:
            printf("Computer picked Scissor!!\n");
            break;
        }
        
        if (userchoice == 1 && computerchoice == 3 ||
            userchoice == 2 && computerchoice == 1 ||
            userchoice == 3 && computerchoice == 2) {
                win++;
            }
            else if (userchoice == computerchoice) {
                tie++;
            }
            
        checker(userchoice, computerchoice);
        
        printf("Would you like to play again?(Y/N)\n");
        printf("Enter: ");
        scanf(" %c", &yes1);
    
    }

         if (yes1 == 'N' || yes1 == 'n' && tie == 0) {
        printf("*** MATCH RESULT ***\n");
        printf("You played %d rounds!!!\n", round);
        printf("You won %d out of %d rounds.", win, round);
        }

        else if (yes1 == 'N' || yes1 == 'n' && tie >= 1) {
        printf("*** MATCH RESULT ***\n");
        printf("You played %d rounds!!!\n", round);
        printf("You won %d and tie %d out of %d rounds.", win, tie, round);
        }

    else {
        printf("*** MATCH RESULT ***\n");
        printf("You played %d rounds!!!\n", round);
        printf("You won %d and tie %d out of %d rounds.", win, tie, round);
    }




        return 0;
    }



    int userinput() {

        int opt = 0;
        

        printf("Choose wisely:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("Enter: ");
        scanf("%d", &opt);
        


        return opt;

    }

    int computerinput() {
        return (rand() % 3) + 1;
    }

    void checker(int userchoice, int computerchoice) {
        if (userchoice == 1 && computerchoice == 3 ||
            userchoice == 2 && computerchoice == 1 ||
            userchoice == 3 && computerchoice == 2) {
                printf("You win!!!\n");
            }
            else if (userchoice == computerchoice) {
                printf("You tied!!\n");
            }
        else {
            printf("You lose!!!\n");
        }
        
    }
