/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:36:36 by wtan              #+#    #+#             */
/*   Updated: 2022/09/17 06:29:16 by wtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/**
 * 1. char is 8 bits long (0 - 7)
 * 2. takes binary value of 'c' in ASCII and shifts it to the right 'i' times,
 *    then compares the bit in position number 0 of the new "c" value with 
 *    "1" in binary. If both are 1 then return 1. If not return 0	
 * 3. kill sends the signal "SIGUSR1/2" to process pid.
 **/
void	convert_char_to_bit(char c, int pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (c >> i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(50);
		i--;
	}
}

/**
 * 1. arg is type "char **", need to transform it to integer for transmission.
 * 2. apply ft_atoi() to each character of arg[2]
 **/
int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i])
			convert_char_to_bit(argv[2][i++], pid);
		return (0);
	}
	else
		ft_printf("Invalid argument! Try instead: [server pid] [message]\n");
}
