/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:51:19 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/13 18:02:42 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	index;

	index = 0;
	while (index < length)
	{
		(*f)(tab[index]);
		index++;
	}
}
