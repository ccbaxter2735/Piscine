/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recherche2_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:25:48 by terussar          #+#    #+#             */
/*   Updated: 2022/07/17 11:09:40 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_2_1(void);
char    *ft_1_2(void);
int	veriflig(char *tm);
int	verifcol(char *tm

char	*recherchelig2_1(char *tm)
{
	int	i;
	char	tr;
// verif ligne
	i = 7;// commence a la deuxieme ligne car colup a la premiere
	tr = ft_2_1();
	while (i <= 28)
	{
		if (tm[i] == 2 && tm[i + 5] == 1)
		{
			k = 0;
			while (k <= 7)
			{
				j = 0;
				while (j < 6)
				{
					tm[i + j] = tr[j + k];
					j++;
				}
				if (verifcol(tm) == 1)
					return (tm);
				k += 7;
			}
		}
		i += 7;
	}
	return (tm);
}

char    *recherchecol2_1(char *tm)
{
        int     i;
        char    tr;
// verif colonne
        i = 1;
        tr = ft_2_1();
        while (i <= 4)
        {
                if (tm[i] == 2 && tm[i + 35] == 1)
                {
			k = 0;
			while (k <= 7)
			{
                        	j = 0;
                        	while (j < 6)
                        	{
                                	tm[i + j] = tr[j];
                                	j++;
                        	}
                	}
		}
                i += 1;
        }
        return (tm);
}

char    *recherchelig1_2(char *tm)
{
        int     i;
        char    tr;
// verif ligne
        i = 7;// commence a la deuxieme ligne car colup a la premiere
        tr = ft_1_2();
        while (i <= 28)
        {
                if (tm[i] == 1 && tm[i + 5] == 2)
                {
                        k = 0;
                        while (k <= 7)
                        {
                                j = 0;
                                while (j < 6)
                                {
                                        tm[i + j] = tr[j + k];
                                        j++;
                                }
                                if (verifcol(tm) == 1)
                                        return (tm);
                                k += 7;
                        }
                }
                i += 7;
        }
        return (tm);
}

char    *recherchecol1_2(char *tm)
{
        int     i;
        char    tr;
// verif colonne
        i = 1;
        tr = ft_1_2();
        while (i <= 4)
        {
                if (tm[i] == 1 && tm[i + 35] == 2)
                {
                        k = 0;
                        while (k <= 7)
                        {
                                j = 0;
                                while (j < 6)
                                {
                                        tm[i + j] = tr[j];
                                        j++;
                                }
                        }
                }
                i += 1;
        }
        return (tm);
}
