/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:40:43 by mkaplan           #+#    #+#             */
/*   Updated: 2023/09/09 17:40:17 by mkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*root;

	root = malloc(sizeof(t_list *));
	if (root == NULL)
		return (0);
	root->content = content;
	root->index = -1;
	root->next = NULL;
	return (root);
}
