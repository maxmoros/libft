/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 18:08:46 by mmoros            #+#    #+#             */
/*   Updated: 2018/02/28 20:29:05 by mmoros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

char	*ft_strnew(size_t size)
{
	char *output;

	size++;
	output = (char*)malloc(size);
	if (output)
		while (size-- > 0)
			output[size] = '\0';
	return (output);
}
