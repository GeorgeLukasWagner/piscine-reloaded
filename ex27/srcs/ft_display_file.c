/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwagner <gwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:55:06 by gwagner           #+#    #+#             */
/*   Updated: 2024/06/06 20:09:20 by gwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

void	fd_check(int fd)
{
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		close(fd);
	}
}

void	ft_display_file(char *filename)
{
	char	filecontent[1];
	int		fd;

	fd = open(filename, O_RDONLY);
	fd_check(fd);
	while (read(fd, filecontent, 1) > 0)
	{
		write(1, filecontent, 1);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_display_file(argv[1]);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	else
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
}
