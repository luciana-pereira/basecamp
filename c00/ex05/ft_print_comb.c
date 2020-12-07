/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:01:20 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/02 13:34:43 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = 48;
	while (c <= 57)
	{
		d = c + 1;
		while (d <= 57)
		{
			u = d + 1;
			while (u <= 57)
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (c != 55)
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}
