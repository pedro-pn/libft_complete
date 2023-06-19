/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d <ppaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 10:57:38 by ppaulo-d          #+#    #+#             */
/*   Updated: 2023/06/19 12:02:31 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Cleans a two-dimensional array and its content. The array must be NULL
 * terminated.
 * @param array The address of a two-dimensional array.
 * @param del The address of the function used to delete the content of the
 * array;
 */
void	ft_clean_array(void **array, void (*del)(void *))
{
	int	i;

	if (array == NULL)
		return ;
	i = 0;
	while (array[i])
	{
		del(array[i]);
		i++;
	}
	free(array);
}
