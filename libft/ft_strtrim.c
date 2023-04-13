/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:47:20 by anshovah          #+#    #+#             */
/*   Updated: 2023/03/10 15:10:01 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_to_trim(char c, const char *set)
{	
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

unsigned int	ft_get_start(char const *s1, char const *set)
{
	int				i;
	unsigned int	start;

	i = 0;
	start = 0;
	while (s1[i])
	{
		if (ft_to_trim(s1[i], set))
			start++;
		else
			break ;
		i++;
	}
	return (start);
}

size_t	ft_get_end(char const *s1, char const *set, size_t len)
{
	size_t	end;

	end = 0;
	while (s1[len])
	{
		if (ft_to_trim(s1[len], set))
		{	
			len--;
			end++;
		}	
		else
			break ;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			len;
	unsigned int	start;
	size_t			end;
	size_t			size;
	char			*trimmed;

	len = ft_strlen(s1);
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set, len - 1);
	size = len - start - end;
	trimmed = ft_substr(s1, start, size);
	return (trimmed);
}
