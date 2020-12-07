#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str[] = "MINUsculas e MAIuscULAS";
	printf("%s", ft_strlowcase (str));
}
