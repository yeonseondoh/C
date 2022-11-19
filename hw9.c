#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[30] = {0};
    int size, cnt = 0;
    int i;
    printf("문장 입력: ");

    gets(str);
    size = sizeof(str) / sizeof(str[0]);

    for(i = 0; i < size; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
            cnt++;
        }

        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] + ('A' - 'a');
            cnt++;
        }
    }

    printf("바뀐 문장: %s \n", str);
    return 0;
}
