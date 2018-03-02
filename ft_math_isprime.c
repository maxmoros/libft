/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_isprime.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 17:38:42 by mmoros            #+#    #+#             */
/*   Updated: 2018/03/01 18:35:23 by mmoros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_math_isprime(unsigned int num)
{
	unsigned int	i;
	int				prime;

	i = 1;
	prime = 1;
	while (++i < num / 2 && prime)
		if (num % i == 0)
			prime = 0;
	return (prime);
}
