/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaures <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:38:38 by avaures           #+#    #+#             */
/*   Updated: 2021/07/09 13:11:21 by avaures          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void  repeat_alpha(char *str)
{
	int i;
	int cb;

	i = 0;
	cb = 0;

	while(str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			cb = (str[i] -64);
		if (str[i] >= 97 && str[i] <= 122)
			cb = (str[i] -96);
		while(cb > 0)
		{
			write(1, &str[i], 1);
			cb--;
		}
		cb = 0;
		i++;
	}
}

int main(void)
{
	repeat_alpha("abacadaba");	
}
