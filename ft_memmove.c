/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:28:33 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/01 10:27:18 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*dst_ptr;

	dst_ptr = dst;
	if ((!dst && !src) || dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		while (len--)
			*(char *)dst++ = *(char *)src++;
	}
	return (dst_ptr);
}
/*
int	main()
{
	char	src[] = "que sucede aqui";
	char	dst[] = "123546";
	char	dstStd[] = "153456";

	printf("Antes de memmove: %s\n", dst);
	ft_memmove(dst, src, 7);
	printf("Despues: %s\n", dst);
	memmove(dstStd, src, 7);
	printf("Std Despues: %s\n", dstStd);
}*/
