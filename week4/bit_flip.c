# include <stdio.h>

int main(){
    unsigned int n, r = 0;

    printf("Enter number: ");
    if (scanf("%u", &n) != 1){puts("Invalid input!"); return 1;}
    printf("Enter bit you want to change: ");
    if(scanf("%u", &r) != 1){puts("Invalid input!"); return 1;}



    n = n ^ (1 << r);

    printf("The new number: %u", n);

    return 0; 
}