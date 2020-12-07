/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 23:47:44 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/03 04:00:35 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int        main(void)
{
    int a;
    int b;

    a = 7;
    b = 3;

    printf("Divisao %d / %d", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("\nResultado da divisão %d\n", a);
    printf("Modulo %d \n", b);
    return(0);
}
