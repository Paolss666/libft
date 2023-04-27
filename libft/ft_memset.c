/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:19:45 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 11:19:45 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
// la function remplit les n premiers octes de la zone de memoire pointeee par s avec l'octet c 
void  *ft_memset(void *s, int c, size_t n)
{
  size_t  i;
  char    *str;

  str = s;
  i = 0;
  while(i < n)
  {
    str[i++] = c;
  }
  return (s);
}