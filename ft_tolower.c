/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:20:48 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 11:22:08 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
/*
int	main()
{
	char	s = 'A';
	char	result = ft_tolower(s);
	char	resultoriginal = tolower(s);
	printf("Initial int: %c\nResult: %c\n", s, result);
	printf("Original result: %c", resultoriginal);
}*/
