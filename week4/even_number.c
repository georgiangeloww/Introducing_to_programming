# include <stdio.h>

int main(){
    unsigned int number = 0;

    if (scanf("%u", &number) != 1){puts("Invalid input!"); return 1;}

    printf("Is the number even: %s\n", (number & 1) ? "No":"Yes");

     
    
    return 0;
}