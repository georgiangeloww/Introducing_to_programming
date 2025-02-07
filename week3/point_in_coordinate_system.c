# include <stdio.h>
# include <math.h>

const double EPSILON = 1e-9;


void One_dimension_metric(){
   double x = 0.0;

    printf("First Coordinate: "); if (scanf("%lf", &x) != 1){puts("Invalid input!"); return 1;}

    else{
        if (fabs(x) < EPSILON){
            puts("The point is on the Abscissa!");
        }
        else{
            if (x > 0.0)
            {
                puts("The point is in the first Sami-plane!");
            }
            else{
                puts("The point is in the second Semi-plane!");
            }
        }
    }
}

void Two_dimension(){
    double x = 0.0;
    double y = 0.0;

    printf("First Coordinate: "); if (scanf("%lf", &x) != 1){puts("Invalid input!"); return 1;} 
    printf("Second coordinate: "); if (scanf("%lf", &y) != 1){puts("Invalid input!"); return 1;}

    // if x == 0 && y == 0 in the center
    // else

    // If fabs x < E on abscisa
    // elif fabs y < E on ordinate
    // else

    // four cases
    // if x > 0 && y > 0 in first quadrant
    // elif x < 0 && y > 0 in second quadrant
    // elif x < 0 K&& y < 0 in third quadrant
    // else in fourth quadrant


    int isxEqualtozero = fabs(x) < EPSILON;
    int isyEqualtozero = fabs(y) < EPSILON;

    if (isxEqualtozero && isyEqualtozero){
        puts("In the center");
    }
    else{
        if (isxEqualtozero){
            puts("The point is on abscisa!");
        }
        else if(isyEqualtozero){
            puts("The point is on ordinate!");
        }
        else{
            if(x > 0 && y > 0){
                puts("The point is in first quadrant!");
            }
            else if(x < 0 && y > 0){
                puts("The point is in second quadrant!");
            }
            else if(x < 0 && y < 0){
                puts("The point is in third quadrant!");
            }
            else{
                puts("The point is in fourth quadrant!");
            }
        }
    }

    

}

void Three_dimension(){
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    printf("First Coordinate: ");  if (scanf("%lf", &x) != 1) {puts("Invalid input"); return 1;}
    printf("Second Coordinate: ");  if (scanf("%lf", &y) != 1) {puts("Invalid input"); return 1;}
    printf("Third Coordinate: ");  if (scanf("%lf", &z) != 1) {puts("Invalid input"); return 1;}


    int isXEqualZero    =   (fabs(x) < EPSILON);
    int isZEqualZero    =   (fabs(z) < EPSILON);
    int isYEqualZero    =   (fabs(y) < EPSILON);

    if (isXEqualZero && isYEqualZero && isZEqualZero) {
        puts("The point is on the Center!");
    } else {
        if (isZEqualZero) {
            if (isYEqualZero) {
                puts("The point is on the Abscissa!");
            } else if (isXEqualZero) {
                puts("The point is on the Ordinate!");
            } else {
                puts("The point is in the Semi-Plane Oxy!");
            }
        } else if (isYEqualZero) {
            if (isZEqualZero) {
                puts("The point is on the Abscissa!");
            } else if (isXEqualZero) {
                puts("The point is on the Applicate!");
            } else {
                puts("The point is in the Semi-Plane Oxz!");
            }
        } else if (isXEqualZero) {
            if (isZEqualZero) {
                puts("The point is on the Ordinate!");
            } else if (isYEqualZero) {
                puts("The point is on the Applicate!");
            } else {
                puts("The point is in the Semi-Plane Oyz!");
            }
        } else {
            if (x > 0.0 && y < 0.0 && z > 0.0) {
                puts("The point is in 1 Octant!");
            } else if (x < 0.0 && y < 0.0 && z > 0.0) {
                puts("The point is in 2 Octant!");
            } else if (x < 0.0 && y > 0.0 && z > 0.0) {
                puts("The point is in 3 Octant!");
            } else if (x > 0.0 && y > 0.0 && z > 0.0) {
                puts("The poins in in 4 Octant!");
            } else if (x > 0.0 && y < 0.0 && z < 0.0) {
                puts("The point is in 5 Octant!");
            } else if (x < 0.0 && y < 0.0 && z < 0.0) {
                puts("The point is in 6 Octant!");
            } else if (x < 0.0 && y > 0.0 && z < 0.0) {
                puts("The point is in 7 Octant!");
            } else {
                puts("The point is in 8 Octant!");
            }
        }
    }
}

int main(){
    One_dimension_metric();
    Two_dimension();
    Three_dimension();

    return 0;
}