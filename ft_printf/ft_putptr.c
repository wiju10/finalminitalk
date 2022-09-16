/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:51:52 by wtan              #+#    #+#             */
/*   Updated: 2022/07/24 22:29:21 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long addr)
{
	int		size;

	size = 0;
	if (addr >= 16)
		size += ft_putptr(addr / 16);
	size += ft_putchar("0123456789abcdef"[addr % 16]);
	return (size);
}
