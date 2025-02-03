/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <adamarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:47:34 by adamarqu          #+#    #+#             */
/*   Updated: 2025/02/03 15:52:00 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char    *g_str;

void    handler(int sig)
{   
    static int      i;
    static int      bit;
    char            *c1;

    if (sig == SIGUSR1)
        i |= (0x01 << bit);
    bit++;
    if(bit == 8)
    {
        c1 = (char *)malloc(sizeof(char) * 2);
        if(!c1)
            return;
        c1[0] = (char)i;
        c1[1] = '\0';
        g_str = ft_strjoin(g_str, c1);
        if (c1[0] == '\n')
        {   
            ft_putstr_fd(g_str, 1);
            free(g_str);
            g_str = NULL;
        }
        bit = 0;
        i = 0;
        free(c1);
    }
}
    
int main()
{
    ft_putstr_fd("[\033[1;32m Server PID: \033[0m", 1);
    ft_putnbr(getpid());
    ft_putstr_fd(" ]\n", 1);
    signal(SIGUSR1, handler);
    signal(SIGUSR2, handler);
    while(1)
        pause();
}