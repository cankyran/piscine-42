/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:52:24 by mucankir          #+#    #+#             */
/*   Updated: 2024/09/01 21:50:53 by mucankir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printhex(unsigned char c)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[c / 16]);
	ft_putchar("0123456789abcdef"[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 126) && (str[i] >= 32))
		{
			ft_putchar(str[i]);
		}
		else
			printhex((unsigned char)str[i]);
		i++;
	}
}

int main()
{
	char str[] = "2\n";
	ft_putstr_non_printable(str);
}
