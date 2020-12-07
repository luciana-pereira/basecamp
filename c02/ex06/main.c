/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:47:26 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/04 00:03:59 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str);

int		main(void)
{
	char string[] = "";
	char *str;
	str = string;
	
	printf("%d \n", ft_str_is_printable(str));
}
