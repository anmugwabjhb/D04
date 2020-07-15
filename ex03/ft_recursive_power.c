/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:24:21 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/15 10:10:03 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	 ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return	(0);

	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else 
		return (1);	
}
