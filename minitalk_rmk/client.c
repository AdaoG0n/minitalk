/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <adamarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:31:22 by adamarqu          #+#    #+#             */
/*   Updated: 2025/02/03 15:51:59 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	conv_binary(int pid, char i)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if((i & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}	
}

void	send_msg(int pid, char *msg)
{
	while (*msg)
	{
		conv_binary(pid, *msg);
		msg++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 3)
		exit(write(1, "ERROR! Wrong format!", 20));
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
			exit(write(1, "ERROR: PID invalid!\n", 20));
		i++;
	}ft_putstr_fd("[", 1);
	send_msg(ft_atoi(argv[1]), argv[2]);
	send_msg(ft_atoi(argv[1]), "\n");
	if (argv[1][i] == '\0')
		write(1, "Message sent!\n", 14);
	return (0);
}

