/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******* <*******@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 02:34:57 by *******           #+#    #+#             */
/*   Updated: 2025/06/19 11:00:44 by *******          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_create_node(void (*del)(void *), t_list **ret,
						t_list **last, void *content);
static void			ft_clean(void *content, t_list *ret, void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*last;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	last = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_clean(content, ret, del);
			return (NULL);
		}
		if (!ft_create_node(del, &ret, &last, content))
			return (NULL);
		lst = lst->next;
	}
	return (ret);
}

static unsigned int	ft_create_node(void (*del)(void *), t_list **ret,
		t_list **last, void *content)
{
	t_list	*temp_lst;

	temp_lst = ft_lstnew(content);
	if (!temp_lst)
	{
		ft_clean(content, *ret, del);
		return (0);
	}
	if (!*ret)
		*ret = temp_lst;
	else
		(*last)->next = temp_lst;
	*last = temp_lst;
	return (1);
}

static void	ft_clean(void *content, t_list *ret, void (*del)(void *))
{
	if (content)
		del(content);
	if (ret)
		ft_lstclear(&ret, del);
}
