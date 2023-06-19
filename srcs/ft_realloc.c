/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d <ppaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:44:07 by ppaulo-d          #+#    #+#             */
/*   Updated: 2023/06/19 12:36:25 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates a new block of heap memory of size bytes and copy the ptr
 * contents to it.
 * @param ptr A pointer to the memory area to be copied and reallocated.
 * @param ptr_size The size of the ptr memory area.
 * @param size The size of the new memory area.
 * @return Returns a pointer to the new memory area with ptr content. If ptr is
 * NULL, the functions return the same as malloc(size). If size is less than
 * ptr_size, the behavior is undefined.
 */
void	*ft_realloc(void *ptr, size_t ptr_size, size_t size)
{
	void	*new_ptr;

	new_ptr = malloc(size);
	if (ptr == NULL)
		return (new_ptr);
	ft_memcpy(new_ptr, ptr, ptr_size);
	free(ptr);
	return (new_ptr);
}
