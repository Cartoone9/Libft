/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******* <*******@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:54:04 by *******           #+#    #+#             */
/*   Updated: 2025/06/19 11:00:44 by *******          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_sp(const char *str, const char *set);
static int		ft_checkrst(const char *set, const char *str);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	size_t	i;
	size_t	j;
	char	*ret;

	length = ft_strlen_sp(s1, set);
	ret = malloc(sizeof(char) * (length + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, (int)s1[i]))
		i++;
	j = 0;
	while (j < length && s1[i])
	{
		ret[j] = s1[i];
		i++;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}

static size_t	ft_strlen_sp(const char *str, const char *set)
{
	size_t	i;
	size_t	sum;

	i = 0;
	while (str[i] && ft_strchr(set, (int)str[i]))
		i++;
	sum = 0;
	while (str[i])
	{
		if (ft_strchr(set, (int)str[i]))
		{
			if (!ft_checkrst(set, &str[i]))
				break ;
		}
		sum++;
		i++;
	}
	return (sum);
}

static int	ft_checkrst(const char *set, const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (!ft_strchr(set, (int)str[i]))
			return (1);
		i++;
	}
	return (0);
}
