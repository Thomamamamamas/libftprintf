/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strclear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:24 by tcasale           #+#    #+#             */
/*   Updated: 2023/02/19 14:26:58 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strclear(char *str)
{
	int		start;
	int		end;
	int		n;
	char	*res;

	start = 0;
	end = ft_strlen(str) - 1;
	n = 0;
	while (str[start] == ' ' || str[start] == '\t')
		start++;
	while (end > 0 && (str[end] == ' ' || str[end] == '\t'))
		end--;
	if ((end == ft_strlen(str) && start == 0) || end == 0)
		return (str);
	res = ft_substr(str, start, end - start);
	return (res);
}
