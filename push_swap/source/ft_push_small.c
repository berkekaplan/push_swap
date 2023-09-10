/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:39:14 by mkaplan           #+#    #+#             */
/*   Updated: 2023/09/10 02:47:16 by mkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag)
{
	t_list	*head;
	int		i;

	i = 0;
	head = *stackA;
	while (head)
	{
		if (head->index == flag)
		{
			if (i <= 2 - flag)
				handle_case_1(stackA, &i);
			else
				handle_case_2(stackA, &i, flag);
			pb(stackA, stackB);
		}
		i++;
		head = head->next;
	}
}

void	handle_case_1(t_list **stackA, int *i)
{
	while (*i > 0)
	{
		ra(stackA);
		(*i)--;
	}
}

void	handle_case_2(t_list **stackA, int *i, int flag)
{
	while ((5 - flag) > *i)
	{
		rra(stackA);
		(*i)++;
	}
}
