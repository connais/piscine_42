/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaures <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:38:32 by avaures           #+#    #+#             */
/*   Updated: 2021/07/20 17:41:01 by avaures          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;

t_list	ft_create_elem(void	*data);

#endif
