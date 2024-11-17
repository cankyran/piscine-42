/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 08:09:27 by mucankir          #+#    #+#             */
/*   Updated: 2024/09/06 08:09:56 by mucankir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 07:55:25 by mucankir          #+#    #+#             */
/*   Updated: 2024/09/06 07:55:37 by mucankir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static char	*create_result(int size, char **strs, char *sep)
{
	int	total_length;
	int	i;
	int	sep_len;
	char	*result;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	sep_len = ft_strlen(sep);
	total_length += (size - 1) * sep_len;
	result = (char *)malloc(total_length + 1);
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = create_result(size, strs, sep);
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}
