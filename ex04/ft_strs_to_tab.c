/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 20:19:45 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 04:53:34 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int			ft_strlen(char *str);
char		*ft_strdup(char *src);

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock_str;

	stock_str = (t_stock_str*)malloc((ac + 1) * sizeof(t_stock_str));
	if (stock_str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		(stock_str[i]).size = ft_strlen(av[i]);
		(stock_str[i]).str = av[i];
		(stock_str[i]).copy = ft_strdup(av[i]);
		i++;
	}
	(stock_str[i]).size = 0;
	(stock_str[i]).str = 0;
	(stock_str[i]).copy = 0;
	return (stock_str);
}

char		*ft_strdup(char *src)
{
	int		srclen;
	char	*dup;
	int		i;

	srclen = ft_strlen(src);
	dup = (char*)malloc((srclen + 1) * sizeof(char));
	i = 0;
	while (i < srclen)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
