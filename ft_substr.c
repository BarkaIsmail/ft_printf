/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:53:49 by isbarka           #+#    #+#             */
/*   Updated: 2022/10/29 04:53:49 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	length;

	if (!s)
		return (0);
	length = ft_strlen (s);
	if (start >= length)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (length <= start + len)
	{
		sub = malloc((length - start + 1) * sizeof(char));
		if (!sub)
			return (0);
		len = length - start;
	}
	else
	{
		sub = malloc((len + 1) * sizeof(char));
		if (!sub)
			return (0);
	}
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
