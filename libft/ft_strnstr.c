/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:10:25 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/28 16:10:25 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char  *ft_strnstr(const char *big, const char *little, size_t len)
{
  size_t  i;
  size_t  j;

  if (little == NULL || little[0] == 0)
    return ((char *)big);
  i = 0;
  j = 0;
  while (big[i])
  {
    while (big[i] == little[j] && i <= len)
    {
      i++;
      j++;
      if (little[j] == '\0' || j == len)
      {
        return ((char *)&big[i - j]);
      }
    }
    i++;
  }
  return (NULL);
}