/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 00:56:40 by ghenriqu          #+#    #+#             */
/*   Updated: 2020/11/22 16:52:48 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top(int x, int y)
{
	int count;

	count = 2;
	if (y >= 1)
	{
		ft_putchar(65);
		while (count < x)
		{
			ft_putchar(66);
			count++;
		}
		if (x > 1)
		{
			ft_putchar(67);
		}
		ft_putchar('\n');
	}
}

void	mid(int x, int y)
{
	int count;
	int count_y;

	count_y = 2;
	while (count_y < y)
	{
		count = 2;
		ft_putchar(66);
		while (count < x)
		{
			ft_putchar(32);
			count++;
		}
		if (x > 1)
		{
			ft_putchar(66);
		}
		ft_putchar('\n');
		count_y++;
	}
}

void	bot(int x, int y)
{
	int count;

	count = 2;
	ft_putchar(67);
	if (y > 1)
	{
		while (count < x)
		{
			ft_putchar(66);
			count++;
		}
		if (x > 1)
		{
			ft_putchar(65);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	top(x, y);
	mid(x, y);
	bot(x, y);
}
