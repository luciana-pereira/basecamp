/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 23:32:17 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/03 19:16:09 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int        main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 10;
    b = 33;
    printf("Divisão %d / %d", a, b);
    ft_div_mod(a, b, &div, &mod);
    printf("\nResultado da divisão %d\n", div);
    printf("Modulo %d \n", mod);
    return(0);
}
