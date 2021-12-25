#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main() {
    float a;
    scanf("%f",&a);
    a=PI/180;
    printf("z1=%f, z2=%f\n",(cos(2a)+sin(5a)-sin(3a))/(cos(a+1)-2sin(2a)sin(2a)),2*sin(a));
    getchar();
    getchar();
    return 0;
}