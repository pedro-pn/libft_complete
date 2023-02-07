/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d <ppaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:30:10 by ppaulo-d          #+#    #+#             */
/*   Updated: 2023/02/07 11:57:56 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief Searches if a node in lst contains content and returns it.
 * In case content is not in lst, NULL is returned.
 * @param lst The list to search.
 * @param contnt The node to be found.
 * @return A pointer to the node in list or NULL.*/
t_list	*ft_lstfind(t_list *lst, void *content)
{
	while (lst != NULL && content != NULL)
	{
		if (lst->content == content)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
