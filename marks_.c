#include <stdio.h>

int main() {
    int maths, social, biology, science, telugu;
    
    printf("Enter the marks obtained in maths: ");
    scanf("%d", &maths);

    printf("Enter the marks obtained in social: ");
    scanf("%d", &social);

    printf("Enter the marks obtained in biology: ");
    scanf("%d", &biology);

    printf("Enter the marks obtained in science: ");
    scanf("%d", &science);

    printf("Enter the marks obtained in telugu: ");
    scanf("%d", &telugu);

    int aggregate_marks = maths + social + biology + science + telugu;
    printf("Aggregate marks of student will be: %d\n", aggregate_marks);

    float percentage_marks = (float)aggregate_marks / 5;
    printf("Percentage marks will be: %.2f %%\n", percentage_marks);

    return 0;
}
