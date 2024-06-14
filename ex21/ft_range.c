/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwagner <gwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:02:38 by gwagner           #+#    #+#             */
/*   Updated: 2024/06/04 16:23:12 by gwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	arrlen(int min, int max)
{
	int	i;

	i = 0;
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	range = malloc(sizeof(int) * arrlen(min, max) + 1);
	if (range == NULL)
	{
		return (NULL);
	}
	if (min >= max)
	{
		return (NULL);
	}
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
