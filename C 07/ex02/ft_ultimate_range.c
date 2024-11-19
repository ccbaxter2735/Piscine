/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:06:32 by terussar          #+#    #+#             */
/*   Updated: 2022/07/25 17:46:24 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	size_t	l;
	size_t	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	l = max - min;
	*range = malloc(l * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i <= l - 1)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
