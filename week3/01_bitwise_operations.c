# include <stdio.h>

int main () {
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);

    int bitwise_AND = a & b;
    int bitwise_OR = a | b;
    int bitwise_NOT_a = ~ a;
    int bitwise_NOT_b = ~ b;
    int bitwise_XOR = a ^ b;

    printf("%d\n", bitwise_AND);
    printf("%d\n", bitwise_OR);
    printf("%d\n", bitwise_NOT_a);
    printf("%d\n", bitwise_NOT_b);
    printf("%d\n", bitwise_XOR);
}