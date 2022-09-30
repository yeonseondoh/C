#include <stdio.h>

int main(){
    int num;
    int i;

    printf("Please enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++)
    {
        if (num % i != 0)
        {
            continue;
        }
        else if (num % i == 0)
        {
            if(num == i)
            {
                printf("It is a prime number. \n");
                break;
            }
            else
            {
                printf("It is not a prime number. \n");
                break;
            }

        }

        printf("It is a prime number. \n");
    }
    return 0;
}
