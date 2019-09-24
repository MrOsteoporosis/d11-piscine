/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_elem.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 11:34:22 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 12:08:18 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		(*tmp).data = data;
		*tmp.next = 0;
	}
	return (tmp);
}
