/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwagner <gwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:54:59 by gwagner           #+#    #+#             */
/*   Updated: 2024/06/05 13:54:57 by gwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printeverything(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar(10);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc - 1)
		{
			j = i + 1;
			while (j < argc)
			{
				if ((ft_strcmp(argv[i], argv[j]) > 0))
				{
					str = argv[i];
					argv[i] = argv[j];
					argv[j] = str;
				}
				j++;
			}
			i++;
		}
		printeverything(argc, argv);
	}
}
