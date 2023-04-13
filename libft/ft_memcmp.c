/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:59:48 by anshovah          #+#    #+#             */
/*   Updated: 2023/03/06 17:15:09 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	char			*s1_c;
	char			*s2_c;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	s1_c = (char *)s1;
	s2_c = (char *)s2;
	if (!n)
		return (0);
	while (s1_c[i] == s2_c[i] && i < n - 1)
		i++;
	c1 = s1_c[i];
	c2 = s2_c[i];
	return (c1 - c2);
}
