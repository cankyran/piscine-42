/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 07:03:27 by mucankir          #+#    #+#             */
/*   Updated: 2024/09/05 08:10:33 by mucankir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ary;
	int	size_ary;

	size_ary = max - min;
	if(min >= max)
		return (NULL);
	ary = (int *)malloc(sizeof(int) * size_ary);
	i = 0;
	while (i < size_ary)
	{
		ary[i] = min;
		min++;
		i++;
	}
	return (ary);
}
