/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:40:35 by anshovah          #+#    #+#             */
/*   Updated: 2023/04/12 11:25:26 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	if (!str)
	{	
		ft_putstr("(null)", len);
		return ;
	}	
	while (*str)
		ft_putchar(*str++, len);
}
