/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 13:47:16 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 14:30:31 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_list	*curr;

	curr = ft_list_push_params(argc, argv);
	while (curr)
	{
		printf("Heres one: %s\n", (char*)(*curr).data);
		curr = (*curr).next;
	}
}
