/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:25:42 by okirca            #+#    #+#             */
/*   Updated: 2023/02/24 17:25:45 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	binary_to_char(int binarymessage)
{
	static int	i = 7;
	static int	character = 0;

	character += binarymessage << i;
	if (i == 0)
	{
		i = 7;
		write(1, &character, 1);
		character = 0;
	}
	else
		i--;
}

void	action(int sig)
{
	if (sig == SIGUSR1)
		binary_to_char(0);
	else if (sig == SIGUSR2)
		binary_to_char(1);
}

int	main(void)
{
	write(1, "Server Pid : ", 13);
	ft_itoa(getpid());
	write(1, "\n", 1);
	signal(SIGUSR1, action);
	signal(SIGUSR2, action);
	while (1)
		pause();
}
