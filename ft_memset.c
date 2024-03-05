/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:22:23 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 10:19:52 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	void	*str_ptr;

	str_ptr = str;
	while (len--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (str_ptr);
}
/*
int	main()
{
	unsigned char	str[] = "keloke";

	printf("Result: %s\n", ft_memset(str, '*', 3));
	printf("Std function result: %s\n", memset(str, '*', 3));
}*/
