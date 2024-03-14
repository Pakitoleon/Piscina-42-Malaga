/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 08:54:33 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/10/05 08:57:56 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char str1[] = "aA12~";
	char str2[] = " ó";
	char str3[] = "ó ";

	printf("str1 %d\n", ft_str_is_printable(str1));
	printf("str2 %d\n", ft_str_is_printable(str2));
	printf("str3 %d\n", ft_str_is_printable(str3));
	return (0);
}*/