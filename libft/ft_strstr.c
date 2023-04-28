/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:07:01 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/28 15:07:01 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char  *ft_strstr(const char *heystack, const char *needle)
{
  size_t  i;
  size_t  j;
  char   *ptr_hey;

  ptr_hey = (char *)heystack;
  if (needle == NULL || needle[0] == 0)
    return(ptr_hey);
  i = 0;
  j = 0;
  while (heystack[i])
  {
    while (heystack[i] == needle[j])
    {
      j++;
      i++;
      if (needle[j] == '\0')
      {
        ptr_hey = (char *)&heystack[i - j];
        return (ptr_hey);
      }
    }
    i++;
  }
  return (NULL);
}