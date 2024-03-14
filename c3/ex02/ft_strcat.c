/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:35:50 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/10/09 17:28:36 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)

{
	char	*i;

	i = dest;
	while (*dest)
		dest++;
	while (*src > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}

/*int	main(void)
{
	char dest[] = "Alto a la, ";
	char src[] = "Guardia civil!";

	ft_strcat(dest, src);
	printf("ft_strcat: %s\n", dest);
	return (0);
}*/