# include <stdio.h>
# include <math.h>

const double EPSILON = 1e-9;

void solveLinialEquation1() {

    double a = 0.0;
    double b = 0.0;

    printf("First num:");
    scanf("%lf", &a);
    printf("Second num:");
    scanf("%lf", &b);

    
    // case 1 : if a and b == 0 le is "every number"
    // case 2 : if a = 0 le is "There are no real solutions"
    // case 3 : -b/a

    if(fabs(a) < EPSILON && fabs (b) < EPSILON){
        printf("Every number is solution");
    }
    else if (fabs(a) < EPSILON){
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

void solveSquaredEquation(){
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    printf("Enter coefficient A: ");    scanf("%lf", &a);
    printf("Enter coefficient B: ");    scanf("%lf", &b);
    printf("Enter coefficient C: ");    scanf("%lf", &c);


    if(fabs(a) < EPSILON){
        unsigned int conditionB =   (fabs(b) < EPSILON);
        unsigned int conditionC =   (fabs(c) < EPSILON);

        if (conditionB && conditionC) {
            puts("Every real number is a solution!");
        } else if (conditionB && !conditionC) {
            puts("There are no solutions!");
        } else {
            printf("Solution is: X = %lf\n", -c / b);
        }
    }
    else{
        double discriminant = (b * b) - (4 * a * c);

        if(discriminant < 0){
            puts("No real solutions!");
        }
        else if (fabs (discriminant) < EPSILON){
            double x_1 = -b / a;
            printf("%lf", x_1);
        }
        else{
            double x_1 = (-b + sqrt(discriminant)) / (2 * a);
            double x_2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("%lf %lf", x_1, x_2);
        }

    }
    

}

void solveLinearEquation2() {
    double  a   =   0.0;
    double  b   =   0.0;
    double  c   =   0.0;
    double  d   =   0.0;

    printf("Enter coefficient A: ");    scanf("%lf", &a);
    printf("Enter coefficient B: ");    scanf("%lf", &b);
    printf("Enter coefficient C: ");    scanf("%lf", &c);
    printf("Enter coefficient D: ");    scanf("%lf", &d);


    // I    Case:   A == 0, B == 0, C == 0, D == 0  ->  x ∈ R
    // II   Case:   A != 0, B == 0, C == 0, D == 0  ->  x ∈ R
    // III  Case:   A == 0, B != 0, C == 0, D == 0  ->  x ∈ R
    // IV   Case:   A != 0, B != 0, C == 0, D == 0  ->  x ∈ R
    // V    Case:   A == 0, B == 0, C != 0, D == 0  ->  x ∈ R
    // VI   Case:   A != 0, B == 0, C != 0, D == 0  ->  x = 0
    // VII  Case:   A == 0, B != 0, C != 0, D == 0  ->  x = 0
    // VIII Case:   A != 0, B != 0, C != 0, D == 0  ->  x = 0, x = -B / A
    // IX   Case:   A == 0, B == 0, C == 0, D != 0  ->  x ∈ R
    // X    Case:   A != 0, B == 0, C == 0, D != 0  ->  x = 0
    // XI   Case:   A == 0, B != 0, C == 0, D != 0  ->  x ∈ ∅
    // XII  Case:   A != 0, B != 0, C == 0, D != 0  ->  x = -B / A
    // XIII Case:   A == 0, B == 0, C != 0, D != 0  ->  x ∈ R
    // XIV  Case:   A != 0, B == 0, C != 0, D != 0  ->  x = 0, x = -D / C
    // XV   Case:   A == 0, B != 0, C != 0, D != 0  ->  x = -D / C
    // XVI  Case:   A != 0, B != 0, C != 0, D != 0  ->  x = -B / A, x = -D / C


    unsigned short int  bit1    =   (fabs(a) >= EPSILON);
    unsigned short int  bit2    =   (fabs(b) >= EPSILON);
    unsigned short int  bit3    =   (fabs(c) >= EPSILON);
    unsigned short int  bit4    =   (fabs(d) >= EPSILON);


    unsigned short int  number  =   0;

    number  =   ((number & ~(1 << 0)) | (bit1 << 0));
    number  =   ((number & ~(1 << 1)) | (bit2 << 1));
    number  =   ((number & ~(1 << 2)) | (bit3 << 2));
    number  =   ((number & ~(1 << 3)) | (bit4 << 3));


    switch (number) {
        case 0:     printf("Every real number is a solution!\n");                   break;
        case 1:     printf("Every real number is a solution!\n");                   break;
        case 2:     printf("Every real number is a solution!\n");                   break;
        case 3:     printf("Every real number is a solution!\n");                   break;
        case 4:     printf("Every real number is a solution!\n");                   break;
        case 5:     printf("Solution is: X = %lf\n", 0.000);                        break;
        case 6:     printf("Solution is: X = %lf\n", 0.000);                        break;
        case 7:     printf("Solutions are: X = %lf, X = %lf\n", 0.000, -b / a);     break;
        case 8:     printf("Every real number is a solution!\n");                   break;
        case 9:     printf("Solution is: X = %lf\n", 0.000);                        break;
        case 10:    printf("There are no solutions!\n");                            break;
        case 11:    printf("Solution is: X = %lf\n", -b / a);                       break;
        case 12:    printf("Every real number is a solution!\n");                   break;
        case 13:    printf("Solutions are: X = %lf, X = %lf\n", 0.000, -d / c);     break;
        case 14:    printf("Solution is: X = %lf\n", -d / c);                       break;
        case 15:    printf("Solutions are: X = %lf, X = %lf\n", -b / a, -d / c);    break;
    }
}

int main () {
    solveLinialEquation1();
    solveSquaredEquation();
    solveLinearEquation2();
    return 0;
}
