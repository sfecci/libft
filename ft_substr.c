/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:42:05 by sfecci            #+#    #+#             */
/*   Updated: 2022/08/03 09:10:01 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//returns the substring of a given string between two given indices
//char / <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	s_len;	
	char	*str;

	a = 0;
	b = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
	len = s_len - start;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[a])
	{
		if (a >= start && b < len)
			str[b++] = s[a];
	a++;
	}
	str[b] = 0;
	return (str);
}
