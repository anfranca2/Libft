/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:55:18 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 11:21:47 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
/*
int	main()
{
	char	s = 'a';
	char	result = ft_toupper(s);
	char	resultoriginal = toupper(s);
	printf("Initial int: %c\nResult: %c\n", s, result);
	printf("Initial int original: %c\nResult %c\n", s, resultoriginal);
}*/
