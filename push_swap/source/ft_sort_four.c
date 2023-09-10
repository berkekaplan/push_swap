/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:39:25 by mkaplan           #+#    #+#             */
/*   Updated: 2023/09/09 17:18:14 by mkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sourt_four(t_list **stackA, t_list **stackB)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stackA, stackB, flag);
	ft_sort_three(stackA);
	pa(stackA, stackB);
}
