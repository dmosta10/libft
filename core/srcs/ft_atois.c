/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atois.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdkhissi <mdkhissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:35:38 by mdkhissi          #+#    #+#             */
/*   Updated: 2022/11/15 18:39:54 by mdkhissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	x_sign(long x, int sign)
{
	if (sign < 0)
		x = 0;
	else
		x = -1;
	return (x);
}

/*
** Bypassing spaces first, if there is a sign after,
** we affect sign variable,
** then we read number by number.
*/

int	ft_atoi(const char *str)
{
	int		i;
	long	x;
	int		sign;

	i = 0;
	x = 0;
	sign = 1;
	while (ft_isspace(str[i]) && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (ft_isdigit(str[i]) && str[i])
	{
		x = x * 10 + str[i] - '0';
		if (x * sign > INT_MAX || x * sign < INT_MIN)
		{
			x = x_sign(x, sign);
			break ;
		}
		i++;
	}
	return ((int)(x * sign));
}

long	ft_atol(const char *str)
{
	int			i;
	long long	x;
	int			sign;

	i = 0;
	x = 0;
	sign = 1;
	while (ft_isspace(str[i]) && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (ft_isdigit(str[i]) && str[i])
	{
		x = x * 10 + str[i] - '0';
		if (x * sign > LONG_MAX || x * sign < LONG_MIN)
		{
			x = x_sign(x, sign);
			break ;
		}
		i++;
	}
	return ((int)(x * sign));
}

static int	itoa_worker(char *s, int div, int i, int n)
{
	while (div != 0)
	{
		if (n < 0)
			s[i++] = n / -div + '0';
		else
			s[i++] = n / div + '0';
		n = n % div;
		div = div / 10;
	}
	s[i] = '\0';
	return (i);
}

/*
** Calculate the divider and the counter
** then allocate a string that can hold the number
** if the number is negative, write - in the string.
** Extract digit by digit from left to right by dividing
** by div and dividing div by 10 every time to extract the right number
** converting every digit to into ascii then copy it in $s.
*/

char	*ft_itoa(int n)
{
	char	*s;
	int		div;
	int		count;
	int		i;
	int		x;

	div = 1;
	x = n;
	count = 1;
	x = x / 10;
	while (x != 0 && count++ >= 0)
	{
		div *= 10;
		x = x / 10;
	}
	if (n < 0)
		count++;
	s = malloc(sizeof(char) * (count + 1));
	if (!s)
		return (NULL);
	i = 0;
	if (n < 0)
		s[i++] = '-';
	i = itoa_worker(s, div, i, n);
	return (s);
}
