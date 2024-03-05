/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:36:44 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 11:21:34 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t		dst_len;
	size_t		total_len;
	const char	*s;

	if (n == 0)
		return (ft_strlen(src));
	if ((!dst || !src) && (!n))
		return (0);
	s = src;
	dst_len = 0;
	while (*(dst + dst_len) && dst_len < n)
		dst_len++;
	if (dst_len < n)
		total_len = dst_len + ft_strlen(s);
	else
		return (n + ft_strlen(s));
	while (*s && (dst_len + 1) < n)
	{
		*(dst + dst_len) = *s++;
		dst_len++;
	}
	*(dst + dst_len) = '\0';
	return (total_len);
}
/*
int	main()
{
	char	src[] = "123";
	char	dst[15] = "kelokes";
	char	dstStd[15] = "kelokes";

	printf("Original dst: %s\n", dst);	
	printf("Total length: %zu\n", ft_strlcat(dst, src, 12));
	printf("Concatenated: %s\n", dst);
	printf("Std function length: %zu\n", strlcat(dstStd, src, 12));
	printf("Std function concatenated: %s", dstStd);
}*/
