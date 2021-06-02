/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaparici <aaparici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:09:51 by aaparici          #+#    #+#             */
/*   Updated: 2020/12/03 21:10:34 by aaparici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char numero;

	numero = '0';
	while (numero != '9' + 1)
	{
		write(1, &numero, 1);
		numero++;
	}
}
