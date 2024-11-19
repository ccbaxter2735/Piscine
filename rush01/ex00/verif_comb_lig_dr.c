/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_comb_lig_dr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:56:10 by abouchez          #+#    #+#             */
/*   Updated: 2022/07/17 10:48:18 by abouchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verif_comb_lig_dr(char *tm)
{
	int	i;
	int	y;
	int	ret;
	int	cpt;

	i = 10;
	cpt = 0;
	while (tm[i] != '\0' && tm[i] != 0)
	{
		y = 0;
		while (i < 26)
		{
			if (tm[i - y] > tm[i] && tm[i - y] <= 4 && tm[i - y] != 0)
			{
				cpt++;
				if (tm[i - y] == 4)
					ret = 1;
			}
			if (cpt == tm[i + 1] && ret == 1)
				return (ret);
			y += 1;
		}
		i += 6;
	}
	return (ret);
}
