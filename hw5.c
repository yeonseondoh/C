#include <stdio.h>

void f(int n)
{
    if (n > 1)
    {
        f(n / 2);
    }
    printf("%d", n % 2);
}

int main()
{
    int n;
    printf("10진수 입력: ");
    scanf("%d", &n);

    f(n);

    return 0;
}
