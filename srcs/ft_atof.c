/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d <ppaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:20:15 by ppaulo-d          #+#    #+#             */
/*   Updated: 2023/01/27 13:15:45 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** This funciton converts the first portion of the string pointed to by nptr
 * into a double.
 * @param nptr The string to be converted.
 * @return The converted double or 0 on error.
 * */
double	ft_atof(const char *str)
{
	double	number;
	double	power;
	int		sign;

	number = 0.0;
	power = 1.0;
	sign = 1;
	while (*str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (ft_isdigit(*str))
		number = number * 10.0 + (*str++ - '0');
	if (*str++ != '.')
		return (sign * number);
	while (ft_isdigit(*str))
	{
		number = number * 10.0 + (*str++ - '0');
		power *= 10.0;
	}
	return (sign * number / power);
}
