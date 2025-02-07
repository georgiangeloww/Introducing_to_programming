# include <stdio.h>

# include <math.h>

const double EPSILON = 1e-9;

double Area_of_triangle(double x1, double x2, double x3, double y1, double y2, double y3){    

// triangle ABC 
    return fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}


int is_point_inside_triangle(double x1, double x2, double x3, double y1, double y2, double y3, double x, double y){

// triangle ABP = A
double ABC = Area_of_triangle(x1, x2, x3, y1, y2, y3);

double ABP = Area_of_triangle(x1, x2, x, y1, y2, y);

double BCP = Area_of_triangle(x, x2, x3, y, y2, y3);

double ACP = Area_of_triangle(x1, x, x3, y1, y, y3);

return fabs(ABC - (ABP + ACP + BCP)) < EPSILON;
}


int main(){

    double x1 = 0.0;
    double x2 = 0.0;
    double x3 = 0.0;
    double y1 = 0.0;
    double y2 = 0.0;
    double y3 = 0.0;

    double x = 0.0;
    double y = 0.0;

    printf("Enter the coordinates of the point: "); if (scanf("%lf %lf", &x, &y) != 2)    { puts("Invalid Input!");   return 1;   }

    printf("Enter the coordinates of Vertex 1: ");  if (scanf("%lf %lf", &x1, &y1) != 2)    { puts("Invalid Input!");   return 1;   }
    printf("Enter the coordinates of Vertex 2: ");  if (scanf("%lf %lf", &x2, &y2) != 2)    { puts("Invalid Input!");   return 1;   }
    printf("Enter the coordinates of Vertex 3: ");  if (scanf("%lf %lf", &x3, &y3) != 2)    { puts("Invalid Input!");   return 1;   }

    if (is_point_inside_triangle(x1, x2, x3, y1, y2, y3, x, y)){
            printf("The point is in the triangle!");
        }
        else{
            printf("The point is out of the triangle!");
        }

    return 0;
}
