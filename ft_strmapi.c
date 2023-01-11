/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:53:31 by isbarka           #+#    #+#             */
/*   Updated: 2022/10/29 04:53:32 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*to_return;

	i = 0;
	to_return = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!to_return || !f)
		return (NULL);
	while (s[i] != '\0')
	{
		to_return[i] = f (i, s[i]);
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}
