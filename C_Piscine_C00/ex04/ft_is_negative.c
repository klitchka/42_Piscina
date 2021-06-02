/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaparici <aaparici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:31:11 by aaparici          #+#    #+#             */
/*   Updated: 2020/12/03 21:16:29 by aaparici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char positivo;
	char negativo;

	positivo = 'P';
	negativo = 'N';
	if (n < 0)
		write(1, &negativo, 1);
	else
		write(1, &positivo, 1);
}
