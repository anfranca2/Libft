/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:32:05 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 11:13:51 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	if (!n)
		return (i);
	while (--n && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (i);
}
/*
int	main()
{
	char	src[] = "keloke";
	char	dst[] = "12345";
	char	dstStd [] = "12345";

	printf("Length: %zu\n", ft_strlcpy(dst, src, 4));
	printf("Dest after my function: %s\n", dst);
	printf("Std function length: %zu\n", strlcpy(dstStd, src, 4));
	printf("Dest after Std function: %s", dstStd);
}*/
