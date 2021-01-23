#include "BuckysInfo.h"

int main()
{
    char password[100];
    int i;
    int dollar = 0;
    int upper = 0;
    int digit = 0;

    printf("Enter a strong password with at least one uppercase letter, digit, and dollar symbol. ");
    scanf(" %s", password);

        for(i = 0; i <= 100; i++){
        if(password[i] == '$'){
            dollar = 1;
            break;
        }
    }

    for(i = 0; i <= 100; i++){
        if(isupper(password[i])){
            upper = 1;
            break;
        }
    }

    for(i = 0; i <= 100; i++){
        if(isdigit(password[i])){
            digit = 1;
            break;
        }
    }

    if((dollar * upper * digit) == 0){
        printf("Hey! Your password sucks.");
    }else{
        printf("Okay. Your password is good to go.");
    }

    return 0;
}
