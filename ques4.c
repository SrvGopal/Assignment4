#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch ((a > b)-( b > a)) {
        case 1:
            printf("Maximum is %d \n", a);
            break;
        case 0:
            printf("Maximum is %d \n", b);
            break;
        case -1:
            printf("The numbers are equal ");
            break;
            
        }
}
