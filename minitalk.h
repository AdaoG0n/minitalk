/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <adamarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:04:30 by adamarqu          #+#    #+#             */
/*   Updated: 2025/03/18 10:11:52 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>


int		ft_atoi(const char *nptr);
char	*ft_strjoin(char *s1, char *s2);
void	ft_putnbr(unsigned int pid);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);


#endif
