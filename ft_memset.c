/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******* <*******@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:54:03 by *******           #+#    #+#             */
/*   Updated: 2025/06/19 11:00:44 by *******          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	value_uc;
	unsigned char	*ptr_uc;
	size_t			i;

	i = 0;
	ptr_uc = (unsigned char *)ptr;
	value_uc = (unsigned char)value;
	while (i < n)
	{
		ptr_uc[i] = value_uc;
		i++;
	}
	return (ptr);
}
