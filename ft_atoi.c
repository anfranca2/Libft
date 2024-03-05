/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:52:12 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/01 10:28:23 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	n;
	int				sign;

	n = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
		if (*str == '-' || *str == '+')
			return (0);
	}
	while (*str >= 48 && *str <= 57)
	{
		n *= 10;
		n += *str - 48;
		str++;
	}
	return (n * sign);
}
/*
int	main()
{
	char	s[] = "---128";
	printf("My function: %d\n", ft_atoi(s));
	printf("Std function: %d", atoi(s));
}*/
