/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:44:00 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 14:44:00 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memmove(void *dest, const void *src, size_t n)
{
  char        *ptr_dest;
  const char  *ptr_src;
  char        *ptr_swap;

  ptr_dest = (char *)dest;
  ptr_src = (const char *)src;
  ptr_swap = (char *)malloc((n) * sizeof(char));
  ft_bzero(ptr_swap, n);
  ft_memcpy(ptr_swap, ptr_src, n);
  ft_memcpy(ptr_dest, ptr_swap, n);
  free(ptr_swap);
  return (dest);
}