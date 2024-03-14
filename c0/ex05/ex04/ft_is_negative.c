/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:36:30 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/09/25 11:44:11 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	respuesta;
	char	respuesta2;

	respuesta = 'P';
	if (n < 0)
	{
		respuesta = 'N';
	}
	else
	{
		respuesta2 = 'P';
	}	
	write(1, &respuesta, 1);
}

/*int	main(void)
{
	ft_is_negative(1);
	return (0);
}*/
