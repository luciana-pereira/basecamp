#include <stdio.h>
char    *ft_strstr(char *str, char *to_find);

int        main(void)
{
    char str[20] = "Olá! Tudo bem?";
    char to_find[5] = "Tudo";
    
    printf("Antes:%s\n", str);
    ft_strstr(&str[0], &to_find[0]);
    printf("Depois:%s\n", str);
    return (0);
}