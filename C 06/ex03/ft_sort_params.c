/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:29:35 by terussar          #+#    #+#             */
/*   Updated: 2022/07/20 15:27:04 by terussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i = i + 1;
	return (s1[i] - s2[i]);
}

void	ft_strswap(char **a, char **b)
{
	char	*i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_put_sort(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (++j <= argc - 2)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
					ft_strswap(&argv[j], &argv[j + 1]);
			}
			i++;
		}
		i = 0;
		while (++i < argc)
			ft_put_sort(argv[i]);
	}
	return (0);
}
