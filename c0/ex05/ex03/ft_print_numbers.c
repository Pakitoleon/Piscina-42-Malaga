/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:10:31 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/09/25 11:46:26 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	inicio;
	char	fin;

	inicio = '0';
	fin = '9';
	while (inicio <= fin)
	{
		write(1, &inicio, 1);
		inicio ++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
