/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:52:36 by isbarka           #+#    #+#             */
/*   Updated: 2022/10/29 04:52:37 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*my_str1;
	unsigned char	*my_str2;
	size_t			i;

	my_str1 = (unsigned char *)str1;
	my_str2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (my_str1[i] != my_str2[i])
		{
			return (my_str1[i] - my_str2[i]);
		}
		i++;
	}
	return (0);
}
