/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaures <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:53:58 by avaures           #+#    #+#             */
/*   Updated: 2021/07/22 09:05:17 by avaures          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int		i;
	int		*newtab;

	i = 0;
	if (length == 0)
		return (NULL);
	newtab = malloc(sizeof(int) * length);
	while (i < length)
	{
		newtab[i] = f(tab[i]);
		i++;
	}
	return (newtab);
}
