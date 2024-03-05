/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:34:04 by anfranca          #+#    #+#             */
/*   Updated: 2024/01/30 12:22:43 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*ptr;

	ptr = malloc(count * n);
	if (!ptr)
		return (0);
	else
		ft_bzero(ptr, (count * n));
	return (ptr);
}
/*
int	main()
{
	printf("My function: %s\n", ft_calloc(3, 3));
	printf("Std function: %s", calloc(3, 3));
}*/
