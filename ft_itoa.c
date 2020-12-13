/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 20:06:12 by abdel-ke          #+#    #+#             */
/*   Updated: 2019/11/13 18:12:16 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*rslt(long nb, int j, int div, char *rst)
{
	if (j)
		rst[0] = '-';
	while (div != 1)
	{
		rst[j++] = (nb / div) + '0';
		nb %= div;
		div /= 10;
	}
	rst[j++] = nb + '0';
	rst[j] = '\0';
	return (rst);
}

char			*ft_itoa(int n)
{
	int				cp;
	int				div;
	int				j;
	long			nb;
	char			*rst;

	cp = 1;
	div = 1;
	nb = n;
	nb = n > 0 ? nb : -nb;
	while (nb / div > 9)
	{
		div *= 10;
		cp++;
	}
	if (!(rst = (char *)malloc(sizeof(char) * cp + 1 + (n < 0))))
		return (NULL);
	j = n < 0;
	return (rslt(nb, j, div, rst));
}
