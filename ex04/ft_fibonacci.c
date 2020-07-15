/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:50:05 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/15 09:57:20 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int	index)
{
	if (index < 0)
		return (-1);

	if (index == 0)
		return (0);

	if (index == 1)
		return (1);

	if (index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 2)		+	ft_fibonacci(index - 1));
}
