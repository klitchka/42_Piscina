/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaparici <aaparici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 16:36:01 by aaparici          #+#    #+#             */
/*   Updated: 2020/12/13 18:02:36 by aaparici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (dest[i])
		i++;
	while ((dest[i++] = src[l++]))
		;
	dest[i] = '\0';
	return (dest);
}
