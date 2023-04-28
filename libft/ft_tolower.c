/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:08:51 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 17:08:51 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
#include "libft.h"

int ft_tolower(int c)
{
  if (c >= 'A' && c <= 'Z')
    return ((c + 32));
  else
    return (c);
}