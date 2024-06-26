#include <stdio.h>

int main(){
    int a;

    printf("Enter the number ");
    scanf("%d", &a);

    switch (a%2) {
        case 1:
            printf("The number %d is odd \n", a);
            break;
        case 0:
            printf("the number %d  is even \n", a);
            break;
        
        }


}
