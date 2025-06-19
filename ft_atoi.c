/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******* <*******@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:14:51 by *******           #+#    #+#             */
/*   Updated: 2025/06/19 11:00:44 by *******          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	long	ret;
	int		neg;

	i = 0;
	ret = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = (ret * 10) + (str[i] - 48);
		i++;
	}
	return ((int)(ret * neg));
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("MY_FT : %i\n", ft_atoi("123"));
	printf("ORIGINAL : %i\n", atoi("123"));
	printf("MY_FT : %i\n", ft_atoi("  -123abc"));
	printf("ORIGINAL : %i\n", atoi("  -123abc"));
	printf("MY_FT : %i\n", ft_atoi("  +-+432abc"));
	printf("ORIGINAL : %i\n", atoi("  +-+432abc"));
	printf("MY_FT : %i\n", ft_atoi("  "));
	printf("ORIGINAL : %i\n", atoi("  "));
	printf("MY_FT : %i\n", ft_atoi("&&éa123"));
	printf("ORIGINAL : %i\n", atoi("&&éa123"));
	printf("MY_FT : %i\n", ft_atoi("-2147483648"));
	printf("ORIGINAL : %i\n", atoi("-2147483648"));
	printf("MY_FT : %i\n", ft_atoi("2147483652"));
	printf("ORIGINAL : %i\n", atoi("2147483652"));
	
	return (0);
}
*/
