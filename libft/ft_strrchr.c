/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:57:00 by anshovah          #+#    #+#             */
/*   Updated: 2023/03/06 14:51:32 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c1;
	int				len;

	len = ft_strlen(s);
	c1 = c;
	while (len >= 0)
	{
		if (s[len] != c1)
			len--;
		else if (s[len] == c1)
			return ((char *)s + len);
	}
	return (NULL);
}
