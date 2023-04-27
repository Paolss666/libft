/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:41:22 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 11:41:22 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t      i;
  char        *pnt_dest;
  const char  *pnt_src;

  pnt_dest = dest;
  pnt_src = src;
  i = 0;

  while (i < n)
  {
    pnt_dest[i] = pnt_src[i];
    i++;
  }
  return (pnt_dest);
}