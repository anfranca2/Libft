/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:17:59 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 10:33:58 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dst_ptr;

	dst_ptr = dst;
	if (!dst && !src)
		return (dst);
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (dst_ptr);
}
/*
int	main()
{
	char	src[] = "hello";
	char	dst[] = "que dise";
	char dstStd[] = "que dise";
	printf("Antes de memcpy: %s\n", dst);
	ft_memcpy(dst, src, 3);
	printf("Despues: %s\n", dst);
	memcpy(dstStd, src, 3);
	printf("Std function despues: %s\n", dstStd);
}*/
