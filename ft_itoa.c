/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:52:01 by isbarka           #+#    #+#             */
/*   Updated: 2022/10/29 04:52:02 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_size(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
			count++;
			n = -n;
	}		
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	if_nb_negative(long *n)
{
	if (*n < 0)
	{
		*n = -(*n);
	}
}

static char	*in_zero_case(void)
{
	char	*to_return;

	to_return = malloc(2);
	if (!to_return)
		return (NULL);
	to_return[0] = '0';
	to_return[1] = '\0';
	return (to_return);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*to_return;
	int		size;

	nb = n;
	if (nb == 0)
	{
		return (in_zero_case());
	}
	size = count_size(nb);
	if_nb_negative(&nb);
	to_return = malloc(size + 1);
	if (!to_return)
		return (NULL);
	to_return[size] = '\0';
	size--;
	while (nb > 0)
	{
		to_return[size] = nb % 10 + 48;
		nb /= 10;
		size--;
	}
	if (size == 0)
		to_return[0] = '-';
	return (to_return);
}
