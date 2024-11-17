/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 02:58:05 by mucankir          #+#    #+#             */
/*   Updated: 2024/08/31 02:55:40 by mucankir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	lowcase(str);
	while (str[i])
	{
		if (('a' <= str[i]) && (str[i] <= 'z'))
		{
			if (cap == 1)
				str[i] -= 32;
			cap = 0;
		}
		else if (('0' <= str[i]) && (str[i] <= '9'))
			cap = 0;
		else
			cap = 1;
		i++;
	}
	return (str);
}
