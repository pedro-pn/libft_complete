/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d <ppaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:38:24 by ppaulo-d          #+#    #+#             */
/*   Updated: 2023/02/07 11:46:19 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Removes and frees the memory of a node from a t_list that
 * contains the given content. The memory of the content is also freed.
 *
 * @param lst The list that contains the node.
 * @param content The content of the node to be deleted from the lst.
 * @param del The address of the function used to delete the content of the
 * node.*/
void	ft_lstdelnode(t_list **lst, void *content, void (*del)(void *))
{
	t_list	*temp;

	if (*lst == NULL || content == NULL)
		return ;
	if ((*lst)->content == content)
	{
		temp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(temp, del);
		return ;
	}
	ft_lstdelnode(&(*lst)->next, content, del);
}
