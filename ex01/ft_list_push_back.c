/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_back.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 12:11:10 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 13:09:02 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*first;

	first = ft_create_elem(data);
	if (first)
	{
		(*first).next = begin_list[0];
		begin_list[0] = first;
	}
}
