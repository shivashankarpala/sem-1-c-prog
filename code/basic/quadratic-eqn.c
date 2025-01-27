#include <stdio.h>
#include <math.h>

void main() 
{
    float a, b, c;
    float discriminant, root1, root2, real_part, imaginary_part;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct\n");
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    } 
    
    else if (discriminant == 0) 
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("Root 1 = Root 2 = %f\n", root1);
    } 
    
    else 
    {
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct\n");
        printf("Root 1 = %f + %fi\n", real_part, imaginary_part);
        printf("Root 2 = %f - %fi\n", real_part, imaginary_part);
    }
}