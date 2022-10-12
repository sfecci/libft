/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:08:19 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/29 09:29:03 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//function checks if 'c' is an alphanumeric
//character (alphabet or number) or not.
//It is defined in the ctype.h header file./ int  c

int	ft_isalnum(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
