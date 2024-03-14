/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:04:02 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/09/27 09:28:48 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int	*a, int	*b)

{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)

{
	int	a;
	int	b;

	a = 1;
	b = 2;

	ft_swap(&a, &b);

	printf("valor a = %d \n", a);
	printf("valor b = %d \n", b);

	return (0);
}
