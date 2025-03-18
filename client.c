/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <adamarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:31:22 by adamarqu          #+#    #+#             */
/*   Updated: 2025/03/18 10:23:42 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

#define RESET "\033[0m"
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define WHITE "\033[1;37m"
#define BOLD "\033[1m"

void	conv_binary(int pid, char i)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((i & (1 << bit)) != 0)
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
		exit (write(1, RED"ERROR!"RESET" Wrong format!\n", 32));
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
			exit(write(1, RED"ERROR:" RESET " PID invalid!\n", 31));
		i++;
	}
	send_msg(ft_atoi(argv[1]), argv[2]);
	send_msg(ft_atoi(argv[1]), "\n");
	if (argv[1][i] == '\0')
		write(1, GREEN "Message sent!\n" RESET, 24);
	return (0);
}

