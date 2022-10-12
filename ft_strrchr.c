/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:58:23 by sfecci            #+#    #+#             */
/*   Updated: 2022/08/03 07:10:04 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function searches for the last occurrence of the character c 
//(an unsigned char) in the string pointed to, by the argument str.
//<string.h> / char

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(&s[i]));
		i--;
	}
	return (NULL);
}
