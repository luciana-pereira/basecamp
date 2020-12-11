/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 00:56:40 by ghenriqu          #+#    #+#             */
/*   Updated: 2020/11/22 00:31:15 by lrocigno         ###   ########.fr       */
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
			if ((cnt_x == 1 || cnt_x == x) && cnt_y == 1)
				ft_putchar(65);
			else if (cnt_y == y && (cnt_x == 1 || cnt_x == x))
				ft_putchar(67);
			else if (cnt_x == 1 || cnt_x == x || cnt_y == 1 || cnt_y == y)
				ft_putchar(66);
			else
				ft_putchar(32);
			cnt_x++;
		}
		ft_putchar('\n');
		cnt_y++;
	}
}
