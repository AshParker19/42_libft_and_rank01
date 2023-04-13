/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:19:02 by anshovah          #+#    #+#             */
/*   Updated: 2023/04/13 17:42:38 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_count(char *str, char c);
void	ft_strings_content(char **split, char *str, char c);

char	**ft_split(char const *s, char c)
{
	int		words_count;
	char	**split;
	char	*s_copy;

	s_copy = (char *)s;
	words_count = ft_word_count(s_copy, c);
	split = malloc(sizeof(char *) * (words_count + 1));
	if (!split)
		return (0);
	split[words_count] = 0;
	ft_strings_content(split, s_copy, c);
	return (split);
}

int	ft_word_count(char *str, char c)
{	
	int	word_count;

	word_count = 0;
	while (*str)
	{
		if (*str == c)
		{
			str++;
			continue ;
		}
		word_count++;
		while (*str != c && *str)
			str++;
	}
	return (word_count);
}

void	ft_strings_content(char **split, char *str, char c)
{
	int	i;
	int	word_beginning_index;
	int	string_index;

	i = 0;
	string_index = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			continue ;
		}
		word_beginning_index = i;
		while (str[i] != c && str[i])
			i++;
		split[string_index] = malloc(i - word_beginning_index + 1);
		ft_strlcpy(split[string_index], str + word_beginning_index,
			i - word_beginning_index + 1);
		string_index++;
	}
}
