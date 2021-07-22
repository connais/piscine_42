/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaures <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:15:53 by avaures           #+#    #+#             */
/*   Updated: 2021/07/22 14:55:47 by avaures          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		i++;
	}
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		keep_going;
	int		size;
	char	*temp;

	keep_going = 1;
	size = ft_tablen(tab);
	while (keep_going)
	{
		keep_going = 0;
		i = 0;
		while (i < (size - 1))
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				keep_going = 1;
			}
			i++;
		}
	}
}
