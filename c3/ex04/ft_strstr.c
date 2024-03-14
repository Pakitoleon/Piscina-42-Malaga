/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:14:19 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/10/09 17:29:00 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*i;
	char	*b;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		i = str;
		b = to_find;
		while (*i && *b && (*i == *b))
		{
			i++;
			b++;
		}
		if (*b == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

/*int main (void)
{
	char *result;

	char str[] = "holis, cacerolis!";
	char to_find[] = "cacerolis";
	result = ft_strstr(str, to_find);
	if (result)
	{
		printf("Cadena encontrada en la posición %ld: %s\n", result - str,
			result);
	}
	else
	{
		printf("Cadena no encontrada.\n");
	}
	return (0);
}*/
