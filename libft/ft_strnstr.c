/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:23:15 by anshovah          #+#    #+#             */
/*   Updated: 2023/03/06 18:12:03 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big_c;
	char	*lil_c;

	big_c = (char *)big;
	lil_c = (char *)little;
	i = -1;
	if (!*little)
		return (big_c);
	while (big_c[++i] && i < len)
	{
		j = 0;
		while (big_c[i + j] == lil_c[j] && i + j < len)
		{
			if (lil_c[j + 1] == '\0')
				return (big_c + i);
			j++;
		}
	}	
	return (0);
}
