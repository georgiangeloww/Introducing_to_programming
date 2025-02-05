# include <stdio.h>
# include <math.h>

void solveLinialEquation1() {

    double a = 0.0;
    double b = 0.0;

    printf("First num:");
    scanf("%lf", &a);
    printf("Second num:");
    scanf("%lf", &b);

    const double EPSOLON = 1e-9;
    // case 1 : if a and b == 0 le is "every number"
    // case 2 : if a = 0 le is "There are no real solutions"
    // case 3 : -b/a

    if(fabs(a) < EPSOLON && fabs (b) < EPSOLON){
        printf("Every number is solution");
    }
    else if (fabs(a) < EPSOLON){
        printf("There are no solutions!");
    }
    else if(b == 0){
        printf("The only solution is 0");
    } 
    else{
        double lineal_equation = -b / a;
        printf("%lf", lineal_equation);
    }
}


int main () {
    solveLinialEquation1();
    return 0;
}

