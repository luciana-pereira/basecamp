/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 00:56:40 by ghenriqu          #+#    #+#             */
/*   Updated: 2020/11/22 20:35:57 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int cnt_x;
	int cnt_y;

	cnt_y = 1;
	while (cnt_y <= y)
	{
		cnt_x = 1;
		while (cnt_x <= x)
		{
			if ((cnt_y == 1 && cnt_x == 1) || (cnt_y == y && cnt_x == y))
				ft_putchar(47);
			else if ((cnt_y == 1 && cnt_x == x) || (cnt_y == y && cnt_x == 1))
				ft_putchar(92);
			else if ((cnt_x == 1 || cnt_x == x) || (cnt_y == 1 || cnt_y == y))
				ft_putchar(42);
			else
				ft_putchar(32);
			cnt_x++;
		}
		ft_putchar('\n');
		cnt_y++;
	}
}
