/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_reverse.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 15:40:41 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 16:54:16 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*new_beginning;
	t_list		*curr;
	t_list		*pointat;

	curr = ft_list_last(*begin_list);
	pointat = curr;
	new_beginning = curr;
	while (pointat)
	{
		curr = ft_list_last(*begin_list);
		pointat = ft_list_at(*begin_list, ft_list_size(*begin_list) - 1);
		(*curr).next = pointat;
		if (pointat)
			(*pointat).next = 0;
	}
	*begin_list = new_beginning;
}

t_list	*ft_list_last(t_list *begin_list)
{
	while ((*begin_list).next)
		begin_list = (*begin_list).next;
	return (begin_list);
}

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0;
	while (begin_list)
	{
		begin_list = (*begin_list).next;
		i++;
	}
	return (i);
}

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
