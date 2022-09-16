/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:56:22 by wtan              #+#    #+#             */
/*   Updated: 2022/03/29 02:07:59 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	slen1;
	size_t	slen2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (slen1 + slen2 + 1));
	if (str == NULL)
		return (0);
	ft_strlcpy(str, s1, slen1 + 1);
	ft_strlcat(str + (slen1), s2, slen2 + 1);
	return (str);
}
