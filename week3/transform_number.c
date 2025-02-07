# include <stdio.h>

int main(){
 unsigned int number = 0;
    unsigned int digit_1 = 0;
    unsigned int digit_2 = 0;
    unsigned int digit_3 = 0;
    
    if (scanf("%u", &number) != 1){puts("Invalid input!"); return 1;};

    if((number < 100 || number > 999) != 1){puts("The number is not with three digits!\n"); return 1;} 

    digit_1 = number % 10;
    digit_2 = (number / 10) % 10;
    digit_3 = number / 100;

    if (digit_1 == 0){
        digit_1 %= 2;
    }
    else{
        digit_1 %= 3;
    }  if (digit_2 == 0){
        digit_2 %= 2;
    }
    else{
        digit_2 %= 3;
    }  if (digit_3 == 0){
        digit_3 %= 2;
    }
    else{
        digit_3 %= 3;
    }
    number = digit_1 + digit_2 * 10 + digit_3 * 100;

    printf("%u", number);

    return 0;
}
