/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 08:11:02 by mucankir          #+#    #+#             */
/*   Updated: 2024/09/05 08:34:55 by mucankir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*ary;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max -min;
	ary = (int*)malloc(sizeof(int) * size);
	if(!ary)
		return (-1);
	i = 0;
	while (min < max)
	{
		ary[i] = min;
		min++;
		i++;
	}
	*range = ary;
	return (size);
}
