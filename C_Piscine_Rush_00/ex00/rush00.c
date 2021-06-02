/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorozco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 10:28:53 by rorozco-          #+#    #+#             */
/*   Updated: 2020/11/29 20:40:52 by rorozco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	format(int col, int fil, int x, int y);

void	rush(int x, int y)
{
	int col;
	int fil;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	fil = 1;
	while (fil <= y)
	{
		col = 1;
		while (col <= x)
		{
			format(col, fil, x, y);
			col++;
		}
		fil++;
		ft_putchar('\n');
	}
}

void	format(int col, int fil, int x, int y)
{
	if ((col > 1 && col < x))
	{
		if ((fil > 1) && (fil < y))
		{
			ft_putchar(' ');
		}
			else ft_putchar('-');
	}
	else if (((col == 1 || col == x) && (fil > 1 && fil < y)))
	{
		ft_putchar('|');
	}
		else ft_putchar('o');
}
