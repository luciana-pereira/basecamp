/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:32:33 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/03 23:15:52 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char *str = "AbcdEFGHIJK";
	printf("%d \n", ft_str_is_alpha(str));
}
