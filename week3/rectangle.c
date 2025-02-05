# include <stdio.h>

int main(){

    double x_1 = 0.0; 
    double x_2 = 0.0; 
    double y_1 = 0.0; 
    double y_2 = 0.0; 
    double z_1 = 0.0; 
    double z_2 = 0.0; 
    double t_1 = 0.0; 
    double t_2 = 0.0;
    int flag = 0;

    scanf("%lf", &x_1);
    scanf("%lf", &x_2);
    scanf("%lf", &y_1);
    scanf("%lf", &y_2);
    scanf("%lf", &z_1);
    scanf("%lf", &z_2);
    scanf("%lf", &t_1);
    scanf("%lf", &t_2);

    if ((z_1 >= x_1 && z_1 <= x_2) || (z_2 >= x_1 && z_2 <= x_2)){
        flag = 1;
    }
    else if ((t_1 >= y_1 && t_1 <= y_2) || (t_2 >= y_1 && t_2 <= y_2))
    {
        flag = 1;
    }
    
    if (flag){
        puts("There is at least one point in common!");
    }
    else{
        puts("There are no commom points!");
    }
    return 0;
}