/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:52:43 by isbarka           #+#    #+#             */
/*   Updated: 2022/10/29 04:52:43 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
	{
		return (NULL);
	}
	if (src < dest)
	{
		while (n > 0)
		{
			*(unsigned char *)(dest + (n - 1))
				= *(unsigned char *)(src + (n - 1));
			n--;
		}
	}
	else
		ft_memcpy (dest, src, n);
	return (dest);
}
