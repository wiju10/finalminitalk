/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:27:34 by wtan              #+#    #+#             */
/*   Updated: 2022/07/24 22:29:21 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// handle MIN_INT
int	ft_putint(int n)
{
	int				size;

	size = 0;
	if (n == -2147483648)
	{
		size += ft_putstr("-2147483648");
	}
	else
	{
		if (n < 0)
		{
		size += ft_putchar('-');
		n = n * -1;
		}
		if (n >= 10)
			size += ft_putint(n / 10);
		size += ft_putchar((n % 10) + '0');
	}
	return (size);
}
