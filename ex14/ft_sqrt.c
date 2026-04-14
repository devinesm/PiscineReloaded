/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:49:18 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/13 15:58:05 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i) <= (unsigned int)nb)
	{
		if ((i * i) == (unsigned int)nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_sqrt(4));
}
*/
