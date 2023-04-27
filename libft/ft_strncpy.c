/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:59:11 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 14:59:11 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strncpy(char *dest, const char *src, size_t n)
{
  size_t  i;

  i = 0;
  while (i < n)
  {
    dest[i] = src[i];
    i++;
  }
  while (i < n)
  {
    dest[i++] = '\0';
  }
  return (dest);
}