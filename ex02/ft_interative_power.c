/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:40:14 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/13 11:59:53 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_interative_power(int nb, int power)
{
	int 		count;
	int			answer;

	count	=	power;
	answer	=	1;

	if (power	<	0)
		return	(0);

	while (count	>	0)
	{
		answer	*=	nb;
		count--;
	}

	return	(answer);
}
