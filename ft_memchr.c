/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:23:34 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 11:35:43 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s++ == (unsigned char)c)
			return ((void *)(unsigned char *)s - 1);
	}
	return (0);
}
/*
int	main()
{
	printf("My function: %s\n", ft_memchr("keloke", 'o', 4));
	printf("Standard function: %s", memchr("keloke", 'o', 4));
}*/
