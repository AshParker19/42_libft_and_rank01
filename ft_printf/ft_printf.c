/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:14:02 by anshovah          #+#    #+#             */
/*   Updated: 2023/04/12 11:23:01 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_placeholders(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x'
		|| c == 'X' || c == '%')
		return (1);
	return (0);
}

void	ft_get_printed(va_list args, char c, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (c == 'p')
		ft_putaddress(va_arg(args, unsigned long), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (c == 'u')
		ft_putnbr(va_arg(args, unsigned int), len);
	else if (c == 'x')
		ft_puthex(va_arg(args, int), 1, len);
	else if (c == 'X')
		ft_puthex(va_arg(args, int), 2, len);
	else if (c == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{	
		if (str[i] == '%' && ft_placeholders(str[i + 1]))
			ft_get_printed(args, str[++i], &len);
		else
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
