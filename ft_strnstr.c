/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:17:06 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 11:45:41 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *need, size_t n)
{
	size_t	j;

	if (!hays && !n)
		return (0);
	if (!*need)
		return ((char *)hays);
	while (*hays && n--)
	{
		j = 0;
		while (*(hays + j) == *(need + j)
			&& *(need + j) && j <= n)
		{
			if (!*(need + j + 1))
				return ((char *)hays);
			j++;
		}
		hays++;
	}
	return (0);
}
/*
int	main()
{
	printf("First occurrence: %s\n", ft_strnstr("keloke mi ninio", "mi", 15));
	printf("Std first occurrence: %s", strnstr("keloke mi ninio", "mi", 15));
}*/
