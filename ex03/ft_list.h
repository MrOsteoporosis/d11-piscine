/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 11:35:46 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 13:45:11 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
#include <stdlib.h>

typedef struct s_list	t_list;

struct	s_list
{
	void	*data;
	t_list	*next;
};

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
#endif
