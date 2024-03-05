/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:30:50 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/01 10:31:24 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*result;

	if (!s)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	i = 0;
	result = str;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (result);
}
/*
char	innerfunction(unsigned int i, char str)
{
	printf("index = %d = %c\n", i, str);
	str = ft_toupper(str);
	return (str);
}

int	main()
{
	char	str[] = "keloke";
	char *result = ft_strmapi(str, innerfunction);
	printf("Result is %s\n", result);
	return (0);
}*/
