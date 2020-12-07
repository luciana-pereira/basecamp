/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:06:19 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/03 04:21:25 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	char	*strlen;
	int		number;

	strlen = str;
	number = 0;
	while (*strlen != 0)
	{
		number++;
		strlen++;
	}
	return (number);
}
