/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:54:19 by wtan              #+#    #+#             */
/*   Updated: 2022/07/24 22:29:18 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		size;
	char	*str_write;

	size = 0;
	va_start(args, str);
	str_write = (char *)str;
	while (*str_write)
	{
		if (*str_write != '%')
			write(1, (str_write), 1);
		else
			size += check_frmt(++str_write, args) - 1;
		size++;
		str_write++;
	}
	va_end(args);
	return (size);
}

int	check_frmt(char *frmt, va_list args)
{
	int	size;

	size = 0;
	if (*frmt == 'c')
		size += ft_putchar(va_arg(args, int));
	else if (*frmt == 's')
		size += ft_putstr(va_arg(args, char *));
	else if (*frmt == 'p')
	{	
		size += ft_putstr("0x");
		size += ft_putptr(va_arg(args, unsigned long));
	}
	else if (*frmt == 'd' || *frmt == 'i')
		size += ft_putint(va_arg(args, int));
	else if (*frmt == 'u')
		size += ft_putusint(va_arg(args, unsigned int));
	else if (*frmt == 'x' || *frmt == 'X')
		size += ft_puthex(va_arg(args, unsigned int), *frmt);
	else if (*frmt == '%')
		size += ft_putchar('%');
	return (size);
}
