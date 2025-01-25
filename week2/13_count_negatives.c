#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d %d %d", &a, &b, &c);

    int positives_nums = (a > 0) + (b > 0) + (c > 0);
    int negatives_nums = (a < 0) + (b < 0) + (c < 0);

    printf("Positives numbers are:%d\n", positives_nums);
    printf("Negatives numbers are:%d\n", negatives_nums);
    return 0;
}
