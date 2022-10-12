/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 09:21:41 by sfecci            #+#    #+#             */
/*   Updated: 2022/08/03 12:02:12 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//are used to duplicate a string. 
//<string.h> / char

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *) malloc ((ft_strlen(s1) + 1) * sizeof (char));
	if (!res)
		return (0);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
