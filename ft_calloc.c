/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******* <*******@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:19:46 by *******           #+#    #+#             */
/*   Updated: 2025/06/19 11:00:44 by *******          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ret_uc;
	void			*ret;
	size_t			i;

	i = 0;
	ret = malloc(size * count);
	if (ret == NULL)
		return (NULL);
	ret_uc = (unsigned char *)ret;
	while (i < size * count)
	{
		ret_uc[i] = 0;
		i++;
	}
	return (ret);
}
