/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_clear.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 14:44:59 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 15:13:14 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*last;
	t_list	*second;

	second = (*begin_list);
	while (second)
	{
		second = (*begin_list);
		while ((*second).next && (*second).next->next)
			second = (*second).next;
		last = (*second).next;
		(*second).next = 0;
		if (last)
			free(last);
		else
		{
			free(second);
			break ;
		}
	}
	*begin_list = 0;
}
