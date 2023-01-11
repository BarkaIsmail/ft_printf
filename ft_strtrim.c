/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:53:45 by isbarka           #+#    #+#             */
/*   Updated: 2022/10/29 04:53:46 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	total;
	char	*to_return;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_check(s1[start], set) == 1)
	{
		start++;
	}
	while (end - 1 >= start && ft_check(s1[end - 1], set) == 1)
		end--;
	total = end - start;
	to_return = malloc(total + 1);
	if (!to_return)
		return (NULL);
	ft_memcpy(to_return, s1 + start, total);
	to_return[total] = '\0';
	return (to_return);
}
