/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:52:19 by terussar          #+#    #+#             */
/*   Updated: 2022/07/19 15:24:54 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	total;

	total = nb;
	if (nb < 0)
		return (0);
	if (nb > 0)
		total = total * ft_recursive_factorial(nb - 1);
	if (nb == 0)
		total = 1;
	return (total);
}
