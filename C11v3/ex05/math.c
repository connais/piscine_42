/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaures <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 16:33:06 by avaures           #+#    #+#             */
/*   Updated: 2021/07/22 09:21:22 by avaures          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nbr);

void	addi(int a, int b)
{
	ft_putnbr(a + b);
}

void	soust(int a, int b)
{
	ft_putnbr(a - b);
}

void	mult(int a, int b)
{
	ft_putnbr(a * b);
}

void	divi(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero", 23);
		return ;
	}
	ft_putnbr(a / b);
}

void	modu(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return ;
	}
	ft_putnbr(a % b);
}
