/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d <ppaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:56:39 by ppaulo-d          #+#    #+#             */
/*   Updated: 2023/02/07 11:45:02 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Removes a node that contains content from a t_list. The memory of
 * content is not freed.
 * @param lst The list that contains the node.
 * @param node The node to be removed from the lst.**/
void	ft_lstremove(t_list **lst, void *content)
{
	t_list	*temp;

	if (*lst == NULL || content == NULL)
		return ;
	if ((*lst)->content == content)
	{
		temp = (*lst);
		*lst = (*lst)->next;
		free(temp);
		return ;
	}
	ft_lstremove(&(*lst)->next, content);
}
