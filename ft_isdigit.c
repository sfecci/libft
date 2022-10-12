/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:52:09 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/29 08:59:00 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//t is defined in <ctype.h> header file. / int
//Function that checks if 'c' is a digit (0 through 9)

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
