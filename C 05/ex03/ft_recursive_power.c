/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:11:48 by terussar          #+#    #+#             */
/*   Updated: 2022/07/19 15:28:48 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	total;

	total = nb;
	if (power < 0)
		return (0);
	if (power > 0)
		total = total * ft_recursive_power(nb, (power - 1));
	if (power == 0 || (power == 0 && nb == 0))
		total = 1;
	return (total);
}
