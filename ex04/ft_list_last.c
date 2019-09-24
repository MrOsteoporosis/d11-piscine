/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_last.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 14:03:38 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 14:06:22 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while ((*begin_list).next)
		begin_list = (*begin_list).next;
	return (begin_list);
}
