#include <stdio.h>
#include <math.h>

double calculateSD(double data[]);
int main() {
    int i;
    double data[5];
    printf("5개의 요소 입력: ");
    for (i = 0; i < 5; ++i)
        scanf("%lf", &data[i]);
    printf("\n표준 편차 = %.3f \n", calculateSD(data));
    return 0;
}
 
double calculateSD(double data[]) {
    double sum = 0, mean, SD = 0;
    int i;
    for (i = 0; i < 5; ++i) {
        sum += data[i];
    }
    mean = sum / 5;
    for (i = 0; i < 5; ++i)
        SD += pow(data[i] - mean, 2);
    return sqrt(SD / 5);
}
