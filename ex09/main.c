/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 13:47:16 by averheij       #+#    #+#                */
/*   Updated: 2019/09/25 10:34:51 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	afunction(void *data)
{
	*(int*)data = *(int*)data + 1;
}

int		main(void)
{
	t_list	**begin_list;
	t_list	*first;
	t_list	*curr;
	void	(*f)(void*);
	int		i;

	i = 1;
	first = ft_create_elem(&i);
	begin_list = &first;
	curr = *begin_list;
	i++;
	ft_list_push_back(begin_list, &i);
	i++;
	ft_list_push_back(begin_list, &i);
	i++;
	ft_list_push_back(begin_list, &i);
	while (curr)
	{
		printf("Heres one: %d\n", *(int*)(*curr).data);
		curr = (*curr).next;
	}
	f = &afunction;
	ft_list_foreach(*begin_list, f);
	curr = *begin_list;
	while (curr)
	{
		printf("Heres one: %d\n", *(int*)(*curr).data);
		curr = (*curr).next;
	}
}
