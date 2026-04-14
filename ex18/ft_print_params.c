/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:14:45 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/13 18:33:32 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	index;
	int	letter;

	index = 1;
	if (argc > 1)
	{
		while (index < argc)
		{
			letter = 0;
			while (argv[index][letter])
			{
				ft_putchar(argv[index][letter]);
				letter++;
			}
			ft_putchar('\n');
			index++;
		}
	}
	return (0);
}
