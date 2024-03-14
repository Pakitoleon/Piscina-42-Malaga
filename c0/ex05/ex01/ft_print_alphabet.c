/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 08:56:01 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/10/03 19:12:17 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	inicio;
	char	fin;

	inicio = 'a';
	fin = 'z';
	while (inicio <= fin)
	{
		write(1, &inicio, 1);
		inicio ++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
