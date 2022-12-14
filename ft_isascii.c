/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:18:47 by sfecci            #+#    #+#             */
/*   Updated: 2022/07/06 11:28:45 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//asascii checks if 'c' parameter is an ASCII character.
//int c

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
