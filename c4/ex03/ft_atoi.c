/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:01:10 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/10/12 13:15:19 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_spaces(char *str2, int *i)
{
	while (str2[*i] == '\t' || str2[*i] == '\n' || str2[*i] == '\v'
		|| str2[*i] == '\f' || str2[*i] == '\r' || str2[*i] == ' ')
	{
		(*i)++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	n;

	n = 0;
	negative = 0;
	i = 0;
	ft_spaces(str, &i);
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			negative = !negative;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10;
		n = n + (str[i] - '0');
		i++;
	}
	if (negative)
		n = n * -1;
	return (n);
}

/*int	main(void)
{
	char *str3;
	str3 = "     \t     ---+--+1234ab567";
	printf("%d", ft_atoi(str3));
	return (0);
}*/