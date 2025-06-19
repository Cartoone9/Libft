/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******* <*******@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:54:03 by *******           #+#    #+#             */
/*   Updated: 2025/06/19 11:00:44 by *******          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*ptr_uc;
	unsigned char	c_uc;
	size_t			i;

	i = 0;
	c_uc = (unsigned char)c;
	ptr_uc = (unsigned char *)ptr;
	while (i < n)
	{
		if (ptr_uc[i] == c_uc)
			return ((void *)&ptr_uc[i]);
		i++;
	}
	return (0);
}
