/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:43:29 by abdel-ke          #+#    #+#             */
/*   Updated: 2019/11/09 10:55:43 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*res;

	if (!s1)
		return (ft_strdup(s1));
	if (!s2)
		return (ft_strdup(s2));
	if (!(res = (char *)malloc(sizeof(char) * (ft_strlen(s1) +
	ft_strlen(s2) + 1))))
		return (NULL);
	k = -1;
	while (s1[++k])
		res[k] = s1[k];
	i = 0;
	while (s2[i])
		res[k++] = s2[i++];
	res[k] = '\0';
	return (res);
}
