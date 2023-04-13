/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:47:41 by anshovah          #+#    #+#             */
/*   Updated: 2023/04/11 13:20:11 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	char		*char_src;

	char_dest = (char *)dest;
	char_src = (char *)src;
	if (!dest && !src)
		return (NULL);
	else if (dest > src)
	{	
		while (n-- > 0)
			char_dest[n] = char_src[n];
	}		
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
