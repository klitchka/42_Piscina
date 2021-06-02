/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaparici <aaparici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:47:07 by aaparici          #+#    #+#             */
/*   Updated: 2020/12/07 15:52:17 by aaparici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_alphabet(void)
{
	char letra;

	letra = 'a';
	while (letra != 'z' + 1)
	{
		write(1, &letra, 1);
		letra++;
	}
}
