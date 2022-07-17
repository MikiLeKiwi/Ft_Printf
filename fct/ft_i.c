/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 22:43:55 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/17 21:07:55 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_i(int nb)
{
	int i;
	
	i = 0;
	ft_putnbr_fd(nb,1);
	i += ft_intlen(nb);
	return(i);
}