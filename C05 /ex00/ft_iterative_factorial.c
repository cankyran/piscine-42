/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 04:29:41 by mucankir          #+#    #+#             */
/*   Updated: 2024/09/05 04:30:43 by mucankir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	fac;

	fac = 1;
	while (nb > 0)
	{
		fac = fac * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (fac);
}
