/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******* <*******@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:54:03 by *******           #+#    #+#             */
/*   Updated: 2025/06/19 11:00:44 by *******          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_uc;
	unsigned char	*src_uc;
	size_t			i;

	if (src == dest)
		return (dest);
	i = 0;
	src_uc = (unsigned char *)src;
	dest_uc = (unsigned char *)dest;
	while (i < n)
	{
		dest_uc[i] = src_uc[i];
		i++;
	}
	return (dest);
}
