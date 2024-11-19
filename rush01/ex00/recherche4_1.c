/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recherche4_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:05:55 by terussar          #+#    #+#             */
/*   Updated: 2022/07/16 17:25:11 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_4_1(void);
char    *ft_1_4(void);

char	*recherchelig4_1(char *tm)
{
	int	i;
	char	tr;
// verif ligne
	i = 7;// commence a la deuxieme ligne car colup a la premiere
	tr = ft_4_1();
	while (i <= 28)
	{
		if (tm[i] == 4 && tm[i + 5] == 1)
		{
			j = 0;
			while (j < 6)
			{
				tm[i + j] = tr[j];
				j++;
			}
		}
		i += 7;
	}
	return (tm);
}

char    *recherchecol4_1(char *tm)
{
        int     i;
        char    tr;
// verif colonne
        i = 1;
        tr = ft_4_1();
        while (i <= 4)
        {
                if (tm[i] == 4 && tm[i + 35] == 1)
                {
                        j = 0;
                        while (j < 6)
                        {
                                tm[i + j] = tr[j];
                                j++;
                        }
                }
                i += 1;
        }
        return (tm);
}

char    *recherchelig1_4(char *tm)
{
        int     i;
        char    tr;

        i = 7;
        tr = ft_1_4();
        while (i <= 28)
        {
                if (tm[i] == 1 && tm[i + 5] == 4)
                {
                        j = 0;
                        while (j < 6) 
                        {
                                tm[i + j] = tr[j];
                                j++;
                        }
                }
                i += 7;
        }
        return (tm);
}

char    *recherchecol1_4(char *tm)
{
        int     i;
        char    tr;
// verif colonne
        i = 1;
        tr = ft_4_1();
        while (i <= 4)
        {
                if (tm[i] == 1 && tm[i + 35] == 4)
                {
                        j = 0;
                        while (j < 6)
                        {
                                tm[i + j] = tr[j];
                                j++;
                        }
                }
                i += 1;
        }
        return (tm);
}

