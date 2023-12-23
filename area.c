#include <stdio.h>

int main() {
    int breadth, length, radius;

    printf("Enter the breadth of a rectangle: ");
    scanf("%d", &breadth);

    printf("Enter the length of a rectangle: ");
    scanf("%d", &length);

    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);

    float area_rec = length * breadth;
    printf("Area of rectangle will be: %f\n", area_rec);

    float peri_rec = 2 * (length + breadth);
    printf("Perimeter of a rectangle will be: %f\n", peri_rec);

    float cir_cir = 3.14 * radius * radius;
    printf("Area of a circle will be: %f\n", cir_cir);

    return 0;
}
