/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:39:07 by wtan              #+#    #+#             */
/*   Updated: 2022/07/24 22:29:19 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

// main ft_printf function
int	ft_printf(const char *str, ...);

// conversions: cspdiuxX%
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long addr);
int	ft_putint(int n);
int	ft_putusint(unsigned int n);
int	ft_puthex(unsigned int n, char letter_case);
int	check_frmt(char *frmt, va_list args);

#endif