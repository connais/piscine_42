/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaures <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:38:25 by avaures           #+#    #+#             */
/*   Updated: 2021/07/03 17:27:07 by avaures          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	afficheLigne(int x, char first, char middle, char last)
{
	ft_putchar(first);
	x--;
	while(x > 1)
	{
	 	ft_putchar(middle);
	 	x--;
 	}
 	if (x == 1)
		ft_putchar(last);
	ft_putchar('\n');
}
void rush(int x, int y)
{
	if (x == 0 || y == 0)
		return;
	afficheLigne(x, 'A', 'B', 'C');
	y--;
	while(y > 1)
	{	
		afficheLigne(x, 'B', ' ', 'B');
		y--;
	}
		if (y == 1)
		afficheLigne(x, 'A', 'B', 'C');
}
int main(void)
{
	rush(10, 12);
}
