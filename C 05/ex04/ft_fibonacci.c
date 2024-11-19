/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:39:31 by terussar          #+#    #+#             */
/*   Updated: 2022/07/19 15:31:37 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	total;

	total = 0;
	if (index < 0)
		return (-1);
	if (index > 1)
		total = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	if (index == 1)
		total += 1;
	if (index == 0)
		total += 0;
	return (total);
}
