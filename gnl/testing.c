/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdkhissi <mdkhissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:57:34 by mdkhissi          #+#    #+#             */
/*   Updated: 2022/08/10 23:49:46 by mdkhissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/get_next_line.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	char	buf[100];
	char	*line;

	fd = open("out", O_RDONLY);
	line = NULL;
	while (get_next_line(fd, &line) > 0)
	{
		//printf("main line = %s\n", line);
	}
}