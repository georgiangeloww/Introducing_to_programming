# include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int x = 0;

    if (scanf("%d", &a) != 1){
        puts("Invalid result!");
        return 1;
    }
    if (scanf("%d", &b) != 1){
        puts("Invalid result!");
        return 1;
    }
    if (scanf("%d", &x) != 1){
        puts("Invalid result!");
        return 1;
    }

    if (x < a) {
        printf("Smaller than a!\n");
    }
    if (a <= x && x <= b) {
        printf("In the interval!\n");
    }
    if (x > b) {
        printf("Bigger than b!\n");
    }
    return 0;    
}
