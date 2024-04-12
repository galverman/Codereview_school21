#include <stdio.h>
#include <math.h>

# define M_PI	3.14159265358979323846

int main() {

    double R;
    char enter;
    if (scanf("%lf%c", &R, &enter) != 2 || enter != '\n')
      printf("n/a");

    double V;
    double four = 4;
    double three = 3;

    V = four / three * M_PI * R * R *R;

    double P = 21500;

    double m;

    m = P * V;

    printf("%.0lf", round(m));

    return 0;
}