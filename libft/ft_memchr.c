/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:26:27 by anshovah          #+#    #+#             */
/*   Updated: 2023/03/06 16:55:02 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_copy;
	unsigned char	c1;

	c1 = c;
	s_copy = (unsigned char *)s;
	i = -1;
	while (++i < n)
	{
		if (s_copy[i] == c1)
			return (s_copy + i);
	}
	return (NULL);
}
