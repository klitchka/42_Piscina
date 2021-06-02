/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaparici <aaparici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:28:50 by aaparici          #+#    #+#             */
/*   Updated: 2020/12/14 18:04:25 by aaparici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int resultado;
	int signo;

	resultado = 0;
	signo = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signo = signo * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultado = resultado * 10 + *str - '0';
		str++;
	}
	return (signo * resultado);
}
