/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:51:53 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 11:51:53 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int ft_atoi(const char  *nptr)
{
  int i;
  int num;
  int min_count;
  int max_count;

  i = 0;
  num = 0;
  min_count = 0;
  max_count = 0;
  while ((nptr[i] >= '0' && nptr[i] <= '9') || (nptr[i] >= 1 && nptr[i] <= 31)
		|| (nptr[i] == '+' || nptr[i] == '-'))
	{
		if (nptr[i] == '+')
			max_count ++;
		if (nptr[i] == '-')
			min_count++;
		if (nptr[i] >= '0' && nptr[i] <= '9')
			num = num * 10 + (nptr[i] - 48);
		i ++;
	}
	if (min_count > 1 || max_count > 1 || max_count + min_count > 1)
		return (0);
	if (min_count % 2 == 1)
		return (num * -1);
	return (num);
}