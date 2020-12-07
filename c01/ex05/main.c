/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:14:54 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/03 04:02:39 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void     ft_putstr(char *str);

int        main(void)
{
    char str[7];

    str[0] = 'P';
    str[1] = 'i';
    str[2] = 'S';
    str[3] = 'c';
    str[4] = 'i';
    str[5] = 'n';
    str[6] = 'a';
    ft_putstr(&str[0]);
    write(1, "\n", 1);
    return (0);
}