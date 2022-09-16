/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:41:39 by wtan              #+#    #+#             */
/*   Updated: 2022/07/24 22:29:22 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char	*str)
{
	int	size;

	size = 0;
	if (!str)
	{
		size += write(1, "(null)", 6);
		return (size);
	}
	else
	{
		while (*str)
		{
			size += write(1, str++, 1);
		}
	}
	return (size);
}
