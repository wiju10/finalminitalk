/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putusint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:08:02 by wtan              #+#    #+#             */
/*   Updated: 2022/07/24 22:29:23 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putusint(unsigned int n)
{
	int	size;

	size = 0;
	if (n >= 10)
		size += ft_putusint(n / 10);
	size += ft_putchar(n % 10 + '0');
	return (size);
}
