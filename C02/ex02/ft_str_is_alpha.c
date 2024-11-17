/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:53:56 by mucankir          #+#    #+#             */
/*   Updated: 2024/08/29 01:00:07 by mucankir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (('a' <= str[i]) && (str[i] <= 'z'))
			i++;
		else if (('A' <= str[i]) && (str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
