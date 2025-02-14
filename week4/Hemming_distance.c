# include <stdio.h>

int main(){
    unsigned char n1 = '\0';
    unsigned char n2 = '\0';

    
    if(scanf("%hhu", &n1) != 1){puts("Invalid input!"); return 1;}
    if(scanf("%hhu", &n2) != 1){puts("Invalid input!"); return 1;}

    unsigned char difference = n1 ^ n2;

    unsigned char bit1 = (difference >> 0) & 1;
    unsigned char bit2 = (difference >> 1) & 1;
    unsigned char bit3 = (difference >> 2) & 1;
    unsigned char bit4 = (difference >> 3) & 1;
    unsigned char bit5 = (difference >> 4) & 1;
    unsigned char bit6 = (difference >> 5) & 1;
    unsigned char bit7 = (difference >> 6) & 1;
    unsigned char bit8 = (difference >> 7) & 1;

    unsigned char sum_of_bits = bit1 + bit2 + bit3 + bit4 + bit5 + bit6 + bit7 + bit8;

    printf("This is number of bits that are diffrent: %hhu", sum_of_bits);
    

    return 0;
}