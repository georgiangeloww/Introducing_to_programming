# include <stdio.h>

int main(){
    unsigned char n = 0;

    if(scanf("%hhu", &n) != 1){puts("Invalid input!"); return 1;}

    unsigned char bit1 = ~(n >> 0) & 1;
    unsigned char bit2 = ~(n >> 1) & 1;
    unsigned char bit3 = ~(n >> 2) & 1;
    unsigned char bit4 = ~(n >> 3) & 1;
    unsigned char bit5 = ~(n >> 4) & 1;
    unsigned char bit6 = ~(n >> 5) & 1;
    unsigned char bit7 = ~(n >> 6) & 1;
    unsigned char bit8 = ~(n >> 7) & 1;

    unsigned char sum_of_bits = bit1 + bit2 + bit3 + bit4 + bit5 + bit6 + bit7 + bit8;

    printf("This is the sum of bit 1: %hhu", sum_of_bits);

    return 0;
}