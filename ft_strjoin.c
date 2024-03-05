/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:54:13 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 12:35:09 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	str = malloc((a + b + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_memmove(str, s1, a);
	ft_memmove(str + a, s2, b + 1);
	return (str);
}
/*
int	main()
{
	printf("%s\n", ft_strjoin("keloke", "hermano"));
}*/
