/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 00:56:40 by ghenriqu          #+#    #+#             */
/*   Updated: 2020/11/23 12:59:40 by lpereira         ###   ########.fr       */
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
			if ((cnt_x == 1 || cnt_x == x) && (cnt_y == 1 || cnt_y == y))
				ft_putchar(111); // 111 = o		e 
			else if (cnt_x == 1 || cnt_x == x)
				ft_putchar(124);
			else if (cnt_y == 1 || cnt_y == y)
				ft_putchar(45); //45 = -
			else
				ft_putchar(32);
			cnt_x++;
		}
		ft_putchar('\n');
		cnt_y++;
	}
}
