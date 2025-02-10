# include <stdio.h>

int main(){
    unsigned int n = 0;
    unsigned int r = 0;
    unsigned int s = 0;

    printf("Enter a number: ");
    if (scanf("%u", &n) != 1){puts("Invalid input!"); return 1;}

    printf("Enter bit r: ");
    if(scanf("%u", &r) != 1){puts("Invalid input!"); return 1;}

    printf("Enter bit s: ");
    if(scanf("%u", &s) != 1){puts("Invalid input!"); return 1;}

    n = n | (1 << r);
    n = n & ~(1 << s);

    printf("This is the new number: %u", n);


    return 0;
}
