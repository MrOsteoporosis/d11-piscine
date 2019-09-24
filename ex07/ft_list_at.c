/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_at.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 15:19:16 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 15:24:48 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	nbr--;
	while (begin_list && nbr)
	{
		begin_list = (*begin_list).next;
		nbr--;
	}
	return (begin_list);
}
