/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:42:54 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/09/27 09:29:35 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

int	main	(void)

{
	int a;
	int b;
	int div;
	int mod;

	a = 7;
	b = 3;

	ft_div_mod(a, b, &div, &mod);

	printf("a : %d, b : %d\n", a, b);
	printf("a : %d. b : %d, div : %d, mod : %d\n", a, b, div, mod);
}
