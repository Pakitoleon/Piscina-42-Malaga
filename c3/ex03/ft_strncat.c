/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:20:32 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/10/09 17:28:50 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*i;

	i = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (i);
}

/*int	main(void)
{
	char dest[] = "Alto, ";
	char src[] = "Guardia civil!";
	unsigned int nb = 2;

	printf("ft_strncat: %s\n", dest);
	ft_strncat(dest, src, nb);
	printf("ft_strncat: %s\n", dest);
	return (0);
}*/