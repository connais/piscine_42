/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaures <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:22:53 by avaures           #+#    #+#             */
/*   Updated: 2021/07/20 17:38:11 by avaures          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;

t_list *ft_create_elem(void *data)
{
	t_list new;

	new.data = data;
	new.next = NULL;
}
