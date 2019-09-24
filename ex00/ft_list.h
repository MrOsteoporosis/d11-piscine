/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 11:35:46 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 12:07:20 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list	t_list;

struct	s_list
{
	void	*data;
	t_list	*next;
};
#endif
