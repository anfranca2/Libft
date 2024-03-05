/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:43:17 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/01 11:23:48 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*str_ptr;

	if (!s || start >= ft_strlen(s) || len == 0)
	{
		str = (char *)malloc(1);
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	s += start;
	str_ptr = str;
	*(str + len) = '\0';
	while (len-- && *s)
		*str++ = *s++;
	return (str_ptr);
}
/*
int	main()
{
	printf("My function: %s", ft_substr("keloke tu dise", 5, 6));
}*/
