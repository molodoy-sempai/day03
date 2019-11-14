/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrusinou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:25:56 by lrusinou          #+#    #+#             */
/*   Updated: 2019/11/14 15:43:19 by lrusinou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] =='\r' || str[i] == '\f' || str[i] == '\n' || str[i] == '+')
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(result * sign);
}

int main(int ac, char *av[])
{
	printf("%d", ft_atoi(av[1]));
			printf("\n");
}
