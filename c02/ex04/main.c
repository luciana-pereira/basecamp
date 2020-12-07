/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:20:53 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/03 23:29:43 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str);

int		main(void)
{
	char *str = "abcdefghij";
	printf("%d \n", ft_str_is_lowercase(str));
}
