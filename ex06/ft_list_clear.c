/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_clear.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 14:44:59 by averheij       #+#    #+#                */
/*   Updated: 2019/09/25 10:10:10 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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

void	ft_list_clear(t_list **begin_list)
{
	t_list	*last;
	t_list	*second;
	int		length;

	last = ft_list_last(*begin_list);
	length = 2;
	while (length > 1)
	{
		last = ft_list_last(*begin_list);
		length = ft_list_size(*begin_list);
		if (length > 1)
		{
			second = ft_list_at(*begin_list, length - 1);
			(*second).next = 0;
		}
		else
		{
			*begin_list = 0;
		}
		free(last);
	}
}
