/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:25:32 by okirca            #+#    #+#             */
/*   Updated: 2023/02/24 17:25:36 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdarg.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_itoa(int pid);

#endif