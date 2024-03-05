/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:49:59 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 10:23:42 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*
int	main()
{
	unsigned char	s[] = "keloeloke";
	size_t	n;

	n = 5;
	printf("Antes de bzero: %s\n", (char*)s);
	ft_bzero(s, n);
	printf("Despues: %s\n", (char*)s);
    bzero(s, n);
    printf("Original function Despues: %s\n", (char*)s);
	return (0);
}*/
