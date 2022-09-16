/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:53:31 by wtan              #+#    #+#             */
/*   Updated: 2022/03/27 19:03:01 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*set;

	set = malloc(count * size);
	if (set == NULL)
		return (set);
	ft_bzero(set, count * size);
	return (set);
}
