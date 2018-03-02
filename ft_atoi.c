/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 17:07:56 by mmoros            #+#    #+#             */
/*   Updated: 2018/03/01 15:01:21 by mmoros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	unsigned long long	out;
	int					sign;

	out = 0;
	sign = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == '+')
		if ((str++) && (*str < '0' || *str > '9'))
			return (0);
	if (*str == '-' && str++)
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		out *= 10;
		out += *str++ - '0';
		if (out > 9223372036854775807 && sign == 1)
			return (-1);
		if (out > 9223372036854775807 && sign == -1)
			return (0);
	}
	out *= sign;
	return (out);
}
