#include <stdio.h>

int main(void){
    char str[80];
    printf("Введите строку символов:\n");
    scanf("%s", str);
    char *ptr = str;

    while (*ptr != '\0'){
        if (*ptr == 'a'){
            *ptr = 'A';
        } else if (*ptr == 'b'){
            *ptr = 'B';
        }
        ptr++;
    }
    printf("%s\n", str);
    return 0;
}
