/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:32:33 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/01 10:32:17 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
/*
void	innerfunction(unsigned int i, char *str)
{
	printf("index = %d is %s\n", i, str);
	*str = ft_tolower(*str);
}
int	main()
{
	char	str[] = "KELOKE";
	ft_striteri(str, innerfunction);
	printf("After ft_striteri: %s", str);
}*/
