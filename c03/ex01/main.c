#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);

int        main (void)
{    
    printf(" 0 Igual %d\n", ft_strncmp("ABCD", "ABCE",3));
    printf(" 1 Maior %d\n", ft_strncmp("ABC", "AB ", 3));
    printf("-1 Menor %d\n", ft_strncmp("ABA", "ABZ", 3));
    return (0);
}
