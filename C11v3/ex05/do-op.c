/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaures <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 19:38:15 by avaures           #+#    #+#             */
/*   Updated: 2021/07/22 11:57:47 by avaures          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
void	addi(int a, int b);
void	soust(int a, int b);
void	mult(int a, int b);
void	divi(int a, int b);
void	modu(int a, int b);

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	void	(*ptr)(int, int);

	if (argc == 4)
	{	
		if (ft_strcmp(argv[2], "+") == 0)
			ptr = &addi;
		else if (ft_strcmp(argv[2], "-") == 0)
			ptr = &soust;
		else if (ft_strcmp(argv[2], "*") == 0)
			ptr = &mult;
		else if (ft_strcmp(argv[2], "/") == 0)
			ptr = &divi;
		else if (ft_strcmp(argv[2], "%") == 0)
			ptr = &modu;
		else
		{
			write(1, "0\n", 2);
			return (0);
		}
		(*ptr)(ft_atoi(argv[1]), ft_atoi(argv[3]));
		write(1, "\n", 1);
	}
}
