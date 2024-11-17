/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 04:11:17 by mucankir          #+#    #+#             */
/*   Updated: 2024/09/05 04:19:17 by mucankir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb > 0)
	{
		fac = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (fac);
}
