/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:00:38 by terussar          #+#    #+#             */
/*   Updated: 2022/07/19 19:32:23 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	a;

	i = 1;
	a = nb;
	if (nb <= 0)
		return (0);
	while ((i * i) <= a)
	{
		if ((i * i) == a)
			return (i);
		i++;
	}
	return (0);
}
