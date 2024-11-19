/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:49:28 by terussar          #+#    #+#             */
/*   Updated: 2022/07/25 15:03:18 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	size_t	l;
	int		*dest;
	size_t	i;

	if (min >= max)
		return (NULL);
	l = max - min;
	i = 0;
	dest = malloc(l * sizeof(int));
	while (i <= l - 1)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
