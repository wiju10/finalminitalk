/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 05:24:42 by wtan              #+#    #+#             */
/*   Updated: 2022/09/17 06:32:42 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
/**
 * 1. Use bitwise operator to reverse the bits because server receives 
 * it in reverse. When the count reaches 8, print out the character.
 **/
static void	signal_handler(int sig)
{
	static int	count;
	static int	byte;

	if (sig == SIGUSR1)
		byte += 1 << (7 - count);
	count++;
	if (count == 8)
	{
		ft_printf("%c", byte);
		count = 0;
		byte = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_printf("Server PID: %d\n", pid);
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	while (1)
		pause();
}
