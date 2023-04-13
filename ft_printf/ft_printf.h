/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:38:00 by anshovah          #+#    #+#             */
/*   Updated: 2023/04/12 11:23:24 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_puthex(unsigned int n, int index, int *len);
void	ft_putnbr(long n, int *len);
void	ft_putaddress(unsigned long addr, int *len);

#endif