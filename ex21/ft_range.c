/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:33:28 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/13 16:35:45 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	else
		range = malloc(4 * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min += 1;
		i += 1;
	}
	return (range);
}
