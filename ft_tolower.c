/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:04:20 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/28 14:14:21 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function takes an uppercase alphabet and convert it to a lowercase character.
//int c / It is defined in ctype.h header file.

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
