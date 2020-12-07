#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
     char str[] = "test de chaine";
     char *str2 = "chaine de test";

     ft_strncpy(str, str2, 6);
     printf("%s", str);
     return 0;
}