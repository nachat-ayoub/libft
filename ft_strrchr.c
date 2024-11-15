/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachat <anachat@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:11:21 by anachat           #+#    #+#             */
/*   Updated: 2024/11/15 12:15:08 by anachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	ch;

	ch = (char) c;
	if(str && !ch)
		return ((char *)str);
	i = ft_strlen((char *)str);
	if(i == 0)
		return (NULL);
	if (ch == '\0' && str[i] == '\0')
		return ((char *)&str[i]);
	while (i >= 0)
	{
		if (str[i] == ch)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
