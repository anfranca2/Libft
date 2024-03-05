/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:00:06 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/01 09:56:40 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)ptr);
}
/*
int	main()
{
	printf("My function: %s\n", ft_strrchr("ke dise el Leo", '\0'));
	printf("Std function: %s", strrchr("ke dise el Leo", '\0'));
}*/
