/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:17:50 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/09/27 09:37:41 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main(void)

{
    int a;
    int b;
    int *a_pointer;
    int *b_pointer;

    a = 15;
    b = 2;
    a_pointer = &a;
    b_pointer = &b;
    ft_ultimate_div_mod(a_pointer, b_pointer);
    printf("%d", a);
    printf("%s", "\n");
    printf("%d", b);
    return (0);
}
