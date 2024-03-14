/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:31:44 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/10/12 13:13:47 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*int	main(void)
{
	char str1[] = "valen";
	char str2[] = "valencia";

	int result = ft_strncmp(str1, str2, 10);
	printf ("%d\n", result);
	printf ("%d\n", strncmp(str1, str2, 10));
	return (0);
}*/
