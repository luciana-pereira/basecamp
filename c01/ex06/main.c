/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:15:15 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/03 04:12:19 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int        ft_strlen(char *str);

int        main(void)
{
    int i;
    char str[7];

    str[0] = 'P';
    str[1] = 'i';
    str[2] = 'S';
    str[3] = 'c';
    str[4] = 'i';
    str[5] = 'n';
    str[6] = 'A';
    i = 0;
    i = ft_strlen(str);
    printf("Tamanho: %d", i);
    return (0);
}
