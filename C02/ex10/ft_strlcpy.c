/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 05:11:43 by mucankir          #+#    #+#             */
/*   Updated: 2024/09/01 17:31:13 by mucankir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	return (src_len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
