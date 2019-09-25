/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_foreach.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/25 10:18:41 by averheij       #+#    #+#                */
/*   Updated: 2019/09/25 10:34:25 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		f((*begin_list).data);
		begin_list = (*begin_list).next;
	}
}
