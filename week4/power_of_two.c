# include <stdio.h>

int main(){
    unsigned int number = 0;

    printf("Questioned number: ");
    if(scanf("%u", &number) != 1){puts("Invalid input!"); return 1;}

    printf("The new number is: %s\n", (number & (number - 1)) == 0 ? "Yes":"No"); 
    
    return 0;
}
