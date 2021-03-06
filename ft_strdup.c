/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrybova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 09:59:08 by ggrybova          #+#    #+#             */
/*   Updated: 2016/11/30 11:48:53 by ggrybova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const	char	*a;
	char			*b;
	int				i;
	int				j;

	j = 0;
	i = (int)ft_strlen(s1);
	a = (const char*)s1;
	b = (char *)malloc(i + 1);
	if (!b)
		return (0);
	while (i-- >= 0)
	{
		b[j] = a[j];
		j++;
	}
	b[j] = '\0';
	return (b);
}
