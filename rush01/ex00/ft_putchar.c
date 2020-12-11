/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 04:04:27 by ghenriqu          #+#    #+#             */
/*   Updated: 2020/11/23 13:38:42 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  // Faz a inclusão dos protótipos das funções de entrada/saída e para evitar erros de compilação

void	ft_putchar(char c)
{
	write(1, &c, 1); // write grava as informaçãoes e %c le os caracteres.
}
