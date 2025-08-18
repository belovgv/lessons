#include <stdio.h>
#include <math.h>
int main() {
double s, w, ch;
scanf("%lf %lf %lf", &s, &w, &ch);
    double other_side = s / w;
    double res = other_side / ch;
printf("%d", (int)res);
return 0;
    
}    