# include <stdio.h>
# include <math.h>

const double EPSILON = 1e-9;

int main(){
    double center_x = 0.0;
    double center_y = 0.0;

    printf("The coordinates of the center of circle:");
    if(scanf("%lf %lf", &center_x, &center_y) != 2){
        puts("Invalid input!");
        return 1;
    }
    
    double radius = 0.0;

    printf("The radius of the circle:");
    if(scanf("%lf", &radius) != 2){
        puts("Invalid input!");
        return 1;
    }

    double x = 0.0;
    double y = 0.0;


    printf("The coordinates of the searched point:");
    if(scanf("%lf %lf", &x, &y) != 2){
        puts("Invalid input!");
        return 1;
    }

    double distance = 0.0;
    distance = sqrt(pow(fabs(x - center_x), 2) + pow((fabs(y - center_y)), 2));

    if (fabs (distance - radius) <= EPSILON){
        printf("The point is in the circle!\n");
    }else{
        if (distance > radius)
        {
            printf("The point is out\n");
        }else{
            printf("The point is in\n");
        }  
    }
<<<<<<< Updated upstream

=======
>>>>>>> Stashed changes
}