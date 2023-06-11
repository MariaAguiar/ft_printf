/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:20:03 by mnascime          #+#    #+#             */
/*   Updated: 2022/05/29 18:51:12 by mnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putnbr_base(int str, char vari);
int		ft_putnbr_p(unsigned long long nb);

#endif
