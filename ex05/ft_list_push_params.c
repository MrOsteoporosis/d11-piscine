/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_params.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 14:13:57 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 14:29:15 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*first;
	t_list	**start;

	first = ft_create_elem(av[0]);
	start = &first;
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(start, av[i]);
		i++;
	}
	return (*start);
}

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*first;

	first = ft_create_elem(data);
	if (first)
	{
		(*first).next = begin_list[0];
		begin_list[0] = first;
	}
}
