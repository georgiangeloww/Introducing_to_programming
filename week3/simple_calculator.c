# include <stdio.h>

# include <math.h>




int main(){
    double const EPSILON = 1e-9;
     char operation = '\0';

    printf("Operation: ");
    if (scanf("%c", &operation) != 1){puts("Invalid input: "); return 1;}
    
    double x = 0.0;
    double y = 0.0;
    
    printf("First number: ");
    if (scanf("%lf", &x) != 1){puts("Invalid input!"); return 1;}
    printf("Second number: ");
    if (scanf("%lf", &y) != 1){puts("Invalid input!"); return 1;}

   

    double result = 0.0;

    switch (operation){
    case '+': result = x + y; break;
    case '-': result = x - y; break;
    case '*': result = x * y; break;
    case '/':
        if (fabs(y) < EPSILON) {puts("Division by zero!"); return 1;}
    
            result = x / y; break;
    
    case '^': result = pow(x, y); break;

    default: puts("Invalid operation!");
    }

    printf("The result is: %.3lf\n", result);

    return 0;
}