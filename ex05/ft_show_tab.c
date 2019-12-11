/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 02:48:18 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 04:53:09 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int positive_nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		positive_nbr = nb * (-1);
	}
	else
	{
		positive_nbr = nb;
	}
	if (positive_nbr >= 10)
	{
		ft_putnbr(positive_nbr / 10);
	}
	ft_putchar((positive_nbr % 10) + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
