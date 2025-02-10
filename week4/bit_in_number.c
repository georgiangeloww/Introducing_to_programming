# include <stdio.h>

int main(){
    int n = 0;
    int s = 0;

    scanf("%d %d", &n, &s);

    int bit = (n >> s) & 1;

    printf("%d", bit);

    return 0;

}