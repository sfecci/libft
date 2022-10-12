/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 08:13:49 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/29 08:52:23 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function erases the data in the n bytes of the memory
//starting at the location pointed to by s, by writing zeros
//use memset(3) in new programs / void /<string.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
