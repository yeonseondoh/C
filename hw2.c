#include <stdio.h>

int main(){
    double num1, num2;
    num2 = num1/1.609;
    printf("Please enter kilometers: ");
    scanf("%lf", &num1);

    printf("%1fkm is equal to %1f miles \n", num1, num2);
    return 0;
}
