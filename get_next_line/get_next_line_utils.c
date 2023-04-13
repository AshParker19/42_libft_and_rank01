/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:32:01 by anshovah          #+#    #+#             */
/*   Updated: 2023/04/07 17:09:32 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_len_nl(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	return (i + (str[i] == '\n'));
}

char	*ft_null_buff(char *content)
{
	int	i;

	i = -1;
	while (content[++i])
		content[i] = 0;
	return (NULL);
}

char	*ft_content_safer(char *s1, char *s2)
{
	int		i;
	int		j;
	int		s1_len;
	int		s2_len;
	char	*new_line;

	i = 0;
	j = 0;
	s1_len = ft_len_nl(s1);
	s2_len = ft_len_nl(s2);
	new_line = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_line)
		return (NULL);
	while (s1 && s1[i])
	{
		new_line[i] = s1[i];
		i++;
	}
	while (s2 && j < s2_len)
		new_line[i++] = s2[j++];
	new_line[i] = 0;
	if (s1)
		free(s1);
	return (new_line);
}

void	ft_manage_buff(char *buff, int *flag)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (buff[i] == '\n')
		*flag = 1;
	while (buff[i] && buff[i] != '\n')
	{
		if (buff[i + 1] == '\n')
			*flag = 1;
		i++;
	}
	i++;
	while (i < BUFFER_SIZE)
	{
		buff[j] = buff[i];
		i++;
		j++;
	}
	while (j < BUFFER_SIZE)
	{
		buff[j] = 0;
		j++;
	}
}
