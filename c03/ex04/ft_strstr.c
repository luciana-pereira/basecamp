/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:39:49 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/05 01:09:15 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int a;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		a = 0;
		while (str[i + a] != '\0' && str[i + a] == to_find[a])
		{
			if (to_find[a + 1] == '\0')
				return (&str[i]);
			a++;
		}
		i++;
	}
	return (0);
}
