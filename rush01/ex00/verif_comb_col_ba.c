/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_comb_col_ba.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:42:19 by abouchez          #+#    #+#             */
/*   Updated: 2022/07/17 10:44:27 by abouchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verif_comb_col_ba(char *tm)
{
	int	i;
	int	y;
	int	ret;
	int	cpt;

	i = 25;
	cpt = 0;
	while (tm[i] != '\0' && tm[i] != 0)
	{
		y = 6;
		while (i > 6)
		{
			if (tm[i - y] > tm[i] && tm[i - y] <= 4 && tm[i - y] != 0)
			{
				cpt++;
				if (tm[i - y] == 4)
				ret = 1;
			}
			if (cpt == tm[i + 6] && ret == 1)
				return (ret);
			y += 6;
		}
		i += 1;
	}
	return (ret);
}
