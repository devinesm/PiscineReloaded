/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:03:04 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/13 18:07:30 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (tab[index])
	{
		if ((*f)(tab[index]) == 1)
			count++;
		index++;
	}
	return (count);
}
