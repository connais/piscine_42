/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaures <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 19:16:23 by avaures           #+#    #+#             */
/*   Updated: 2021/07/22 18:45:11 by avaures          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_sort_direction(int *tab, int length, int(*f)(int, int), int dir)
{
	int	i;

	i = 0;
	while (i < (length - 1))
	{
		if (dir == 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
		}
		else
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if (ft_is_sort_direction(tab, length, f, 1)
		|| ft_is_sort_direction(tab, length, f, 0))
		return (1);
	return (0);
}
