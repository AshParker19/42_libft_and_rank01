/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:47:03 by anshovah          #+#    #+#             */
/*   Updated: 2023/04/13 12:51:12 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	content[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*safe;
	int			flag;

	safe = NULL;
	flag = 0;
	if (fd < 0 || fd > FOPEN_MAX || !BUFFER_SIZE || read(fd, 0, 0) < 0)
	{
		if (fd >= 0 && fd <= FOPEN_MAX)
			return (ft_null_buff(content[fd]));
		return (NULL);
	}
	while (content[fd][0] || read(fd, content[fd], BUFFER_SIZE) > 0)
	{
		safe = ft_content_safer(safe, content[fd]);
		ft_manage_buff(content[fd], &flag);
		if (flag)
			break ;
	}
	return (safe);
}
