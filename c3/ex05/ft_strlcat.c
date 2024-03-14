/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:47:04 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/10/09 17:29:08 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	total_size;
	char			*i;

	i = dest;
	while (*dest && size > 0)
	{
		dest++;
		size--;
	}
	while (*src && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	total_size = dest - i + size;
	return (total_size);
}

/*int	main(void)
{
	char dest[] = "Alibaba ";
	char src[] = "y los 40 ladrones!";
	unsigned int size = 5;

	printf("ft_strlcat: %s\n", dest);
	unsigned int	resultado = ft_strlcat(dest, src, size);
	printf("ft_strlcat: %s\n", dest);
	printf("tamaño total:%u\n", resultado);
	return (0);
}*/