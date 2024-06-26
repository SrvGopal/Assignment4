#include <stdio.h>

int main() {
    int a;

    printf("Enter the number ");
    scanf("%d", &a);

    switch ((a > 0) -(a < 0)) {
        case 1:
            printf("The number %d is positive \n", a);
            break;
        case 0:
            printf("the number %d  is negative \n", a);
            break;
        case -1:
            printf("The number %d is zero",a);
        default:
            printf("Invalid input ");
        
        }
}
