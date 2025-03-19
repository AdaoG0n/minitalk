/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <adamarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:32:42 by adamarqu          #+#    #+#             */
/*   Updated: 2025/03/19 16:12:13 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*g_str = NULL;

void	append_char_to_str(char c)
{
	char	*temp;
	char	*new_str;

	temp = (char *)malloc(sizeof(char) * 2);
	if (!temp)
		return ;
	temp[0] = c;
	temp[1] = '\0';
	if (!g_str)
	{
		g_str = malloc(1);
		g_str[0] = '\0';
	}
	new_str = ft_strjoin(g_str, temp);
	free(g_str);
	g_str = new_str;
	free(temp);
	if (c == '\n' || c == '\0')
	{
		write(1, g_str, ft_strlen(g_str));
		free(g_str);
		g_str = NULL;
	}
}

void	process_signal( int sig)
{
	static int	i;
	static int	bit;

	if (sig == SIGUSR1)
		i |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		append_char_to_str((char)i);
		bit = 0;
		i = 0;
	}
}


int	main(void)
{
	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
	signal(SIGUSR1, process_signal);
	signal(SIGUSR2, process_signal);
	while (1)
		pause();
}
