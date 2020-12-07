#include <stdio.h>
char    *ft_strcat(char *dest, char *src);

int        main(void)
{
    char str1[20] = "Olá!";
    char str2[11] = " Tudo bem?";

    printf("Antes:%s\n", str1);
    ft_strcat(&str1[0], &str2[0]);
    printf("Depois:%s\n", str1);    
    return (0);
}