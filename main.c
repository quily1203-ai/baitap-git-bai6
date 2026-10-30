#include <stdio.h>
 
int main(void) {
    float a, b;
    printf("Nhap hai so: ");
    if (scanf("%f%f", &a, &b) != 2)
        return 1;
 
    printf("Thuong = %.2f\n", a / b);
    return 0;
}