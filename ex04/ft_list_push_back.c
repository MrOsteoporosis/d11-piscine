/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_back.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 12:11:10 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 13:42:57 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last;
	t_list	*curr;

	curr = begin_list[0];
	while ((*curr).next)
		curr = (*curr).next;
	last = ft_create_elem(data);
	if (last)
		(*curr).next = last;
}
