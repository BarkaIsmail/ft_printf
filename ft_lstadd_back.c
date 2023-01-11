/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:52:05 by isbarka           #+#    #+#             */
/*   Updated: 2022/10/29 04:52:05 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*my_lst;

	if (!lst || !new)
		return ;
	my_lst = *lst;
	if (my_lst)
	{
		while (my_lst->next != NULL)
			my_lst = my_lst->next;
		my_lst->next = new;
	}
	else
		*lst = new;
}
