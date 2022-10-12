/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 07:37:04 by sfecci            #+#    #+#             */
/*   Updated: 2022/08/03 07:17:15 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//removes all whitespace characters from the beginning and the end of a string.
//char / <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1)
		return (0);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	if (!set)
		return (0);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	return (ft_substr(s1, i, j - i));
}
