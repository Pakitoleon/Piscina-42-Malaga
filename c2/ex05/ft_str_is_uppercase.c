/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 08:52:48 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/10/05 11:58:36 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char str1[] = "asd";
	char str2[] = "123";
	char str3[] = "ABC";
	char str4[] = "aB1";

	printf("str1 %d\n", ft_str_is_uppercase(str1));
	printf("str2 %d\n", ft_str_is_uppercase(str2));
	printf("str3 %d\n", ft_str_is_uppercase(str3));
	printf("str4 %d\n", ft_str_is_uppercase(str4));
	return (0);
}*/
