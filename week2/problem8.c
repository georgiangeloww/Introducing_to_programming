#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    printf("Enter first num:");
    scanf("%d", &a);
    printf("Enter second num:");
    scanf("%d", &b);

    int max_number = (a > b) * a + (a <= b) * b; 
    int min_number = (a < b) * a + (a >= b) * b;

    printf("%d\n", max_number); 

    
    return 0;
}
