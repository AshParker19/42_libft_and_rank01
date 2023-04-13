/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:26:50 by anshovah          #+#    #+#             */
/*   Updated: 2023/04/13 12:56:08 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	content[BUFFER_SIZE + 1];
	char		*safe;
	int			flag;

	flag = 0;
	safe = NULL;
	if (fd < 0 || fd > FOPEN_MAX || !BUFFER_SIZE)
		return (NULL);
	if (read(fd, 0, 0) < 0)
		return (ft_null_buff(content));
	while (content[0] || read(fd, content, BUFFER_SIZE) > 0)
	{
		safe = ft_content_safer(safe, content);
		ft_manage_buff(content, &flag);
		if (flag)
			break ;
	}
	return (safe);
}
