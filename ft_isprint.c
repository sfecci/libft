/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:44:02 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/29 09:02:03 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//ft checks whether a character is a printable character or not.
//<ctype.h> header file./ int 

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}
