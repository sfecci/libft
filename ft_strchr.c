/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:11:04 by sfecci            #+#    #+#             */
/*   Updated: 2022/08/03 07:16:22 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function finds the first occurrence of a character in a string
//<string.h> / char

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
