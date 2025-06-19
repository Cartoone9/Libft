/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******* <*******@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:54:03 by *******           #+#    #+#             */
/*   Updated: 2025/06/19 11:00:44 by *******          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*ptr1_uc;
	unsigned char	*ptr2_uc;
	size_t			i;

	ptr1_uc = (unsigned char *)ptr1;
	ptr2_uc = (unsigned char *)ptr2;
	i = 0;
	while (i < n && ptr1_uc[i] == ptr2_uc[i])
		i++;
	if (i == n)
		return (0);
	return ((int)ptr1_uc[i] - (int)ptr2_uc[i]);
}
