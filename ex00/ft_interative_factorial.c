/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:38:25 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/15 10:06:23 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		 ft_interative_factorial(int nb)
{
	int	 count;
	int	 result;

	count = 1;
	result = nb;

	if (nb < 0)
		return (0);

	if (nb == 0)
		return (count);

	while (count < nb)
	{
		result = result * (nb - count);
		count++;
	}

	return (result);
}
