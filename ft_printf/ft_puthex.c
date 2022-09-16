/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:59:43 by wtan              #+#    #+#             */
/*   Updated: 2022/07/24 22:29:21 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, char letter_case)
{
	int	size;

	size = 0;
	if (num >= 16)
		size += ft_puthex((num / 16), letter_case);
	num = num % 16;
	if (letter_case == 'X')
		size += ft_putchar("0123456789ABCDEF"[num]);
	else
		size += ft_putchar("0123456789abcdef"[num]);
	return (size);
}
