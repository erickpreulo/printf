/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:12:19 by egomes            #+#    #+#             */
/*   Updated: 2021/05/26 12:02:22 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>

# define LETRAS  "csdiupxX"

typedef struct s_as
{
	char	c;
	int		i;
	int		j;
	char	*buff;
	int		cpy;
	char	*s;
	char	*bf;
	int		size;
	char	*af;
	int		a;
	int		b;
	int		trashcpy;
}				t_as;

typedef struct s_dot
{
	char			*bf;
	char			*af;
	int				l;
	int				a;
	int				b;
	char			*neg;
	char			*s;
	const char		*buff;
	int				cpya;
	int				cpyb;
	int				la;
	long int		au;
	long int		bu;
	long int		cpyau;
	long int		cpybu;
	long int		lu;
	unsigned int	arg;
	char			*sx;
	char			*scpy;
}				t_dot;

typedef struct s_obj
{
	int				nbrsize;
	int				printedhex;
	char			*hex;
	int				counthex;
	int				printed;
	va_list			ap;
	int				sequence;
	int				sizes;
	int				size;
	int				i;
	char			*buff;
	char			cpy;
	unsigned int	hexleng;
	unsigned int	unsig;
	int				trash;
}				t_obj;

int		ft_printf(const char *str, ...);

void	print(const char *str, t_obj *obj);
void	printc(const char *str, t_obj *obj);
void	prints(const char *str, t_obj *obj);
void	printdi(const char *str, t_obj *obj);
void	printu(const char *str, t_obj *obj);
void	printx(const char *str, t_obj *obj);
void	printX(const char *str, t_obj *obj);
void	printp(const char *str, t_obj *obj);
void	printpc(const char *str, t_obj *obj);

void	ft_putchar(char c, t_obj *obj);
void	ft_putchars(char *s, t_obj *obj);
void	ft_putnbr(int n, t_obj *obj);
void	ft_putnbru(unsigned int nb, t_obj *obj);
void	ft_putnbr_hex(unsigned long nbr, char *base, t_obj *obj);
int		ft_strlen(const char *str);
void	ft_strlen_hex(int nbr, char *base, t_obj *obj);
int		ft_strlen_nrb(const char *str);
int		ft_strlen_find_dot(const char *str);
char	*ft_strlen_afdot(const char *str, char *s, t_obj *obj);
char	*ft_strlen_afdotdi(const char *str);
char	*ft_strlen_bfdot(const char *str);
void	ft_leng_hexs(unsigned long nbr, t_obj *obj);
int		ft_findless(const char *str);
int		ft_find_as(const char *str);
int		as_find_lether(char c);
int		ft_atoi(const char *str);
int		ft_atoiu(const char *str);
char	*ft_newstr(size_t size);
void	*ft_memset(char *s, int c, size_t n);
void	*ft_memsetstart(char *s, int c, size_t start, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t start, size_t end);
void	*ft_memcpyneg(void *dst, const void *src, int end);
void	*ft_memcpynegstay(void *dst, const void *src, int end);
void	ft_cpy_hexs(unsigned long nbr, char *base, t_obj *obj);
char	*ft_itoa(int n);
char	*ft_itoap(unsigned int n);
char	*ft_itoahex(unsigned int n);
void	ft_neg(char *str);
void	ft_negdi(char *str);
int		ft_isneg(char *str);
void	ft_negdot(char *str);
int		jump(const char *str);
int		jump1(const char *str);

void	ft_print0(t_obj *obj);
void	ft_print0hex(char *str, t_obj *obj);
void	ft_print0u(t_obj *obj);
void	ft_print0pc(t_obj *obj);

void	ft_printspace(t_obj *obj);
void	ft_printspaces(t_obj *obj);
void	ft_printspacec(char s, t_obj *obj);
void	ft_printspacehex(char *str, t_obj *obj);
void	ft_printspacehexp(char *hex, t_obj *obj, const char *str);
void	ft_printspaceu(t_obj *obj);
void	spahex(t_obj *obj);

void	ft_printendspacec(char s, t_obj *obj);
void	ft_printendspace(t_obj *obj);
void	ft_printendspaces(t_obj *obj);
void	ft_printendspacehex(char *str, t_obj *obj);
void	ft_printendspacehexp(char *hex, t_obj *obj, const char *str);
void	ft_printendspaceu(t_obj *obj);

void	ft_printdot_di(const char *str, t_obj *obj);
void	ft_printdot_s(const char *str, t_obj *obj);
void	ft_printdot_hex(const char *str, t_obj *obj, char *hex);
void	ft_printdot_u(const char *str, t_obj *obj);

void	dot_d1(t_dot *dotd, t_obj *obj, const char *str);
void	dot_d2(t_dot *dotd, t_obj *obj, const char *str);
void	dot_d2_1(t_dot *dotd, const char *str);
void	dot_d2_6(t_dot *dotd, t_obj *obj);
void	dot_d3(t_dot *dotd, t_obj *obj, const char *str);
void	dot_d3_1(t_dot *dotd);
void	dot_d3_2_1(t_dot *dotd, t_obj *obj, const char *str);
void	dot_d3_5(t_dot *dotd, t_obj *obj);
void	dot_d4(t_dot *dotd, t_obj *obj, const char *str);
void	dot_d5(t_dot *dotd, t_obj *obj);
void	dot_d6(t_dot *dotd, t_obj *obj);
void	dot_d7(t_dot *dotd, t_obj *obj);
void	dot_d8(t_dot *dotd, t_obj *obj);

void	dot_u1(t_dot *dotd, t_obj *obj, const char *str);
void	dot_u2(t_dot *dotd, t_obj *obj, const char *str);
void	dot_u2_1(t_dot *dotd, const char *str);
void	dot_u2_6(t_dot *dotd, t_obj *obj);
void	dot_u2_2(t_dot *dotd);
void	dot_u3(t_dot *dotd, t_obj *obj, const char *str);
void	dot_u3_1(t_dot *dotd);
void	dot_u3_2_1(t_dot *dotd, t_obj *obj, const char *str);
void	dot_u4(t_dot *dotd, t_obj *obj, const char *str);
void	dot_u4_0(t_dot *dotd);
void	dot_u5(t_dot *dotd, t_obj *obj);
void	dot_u6(t_dot *dotd, t_obj *obj);
void	dot_u7(t_dot *dotd, t_obj *obj);

void	dot_x1(t_dot *dotd, t_obj *obj, const char *str, char *hex);
void	dot_x2(t_dot *dotd, t_obj *obj, const char *str);
void	dot_x2_1(t_dot *dotd, const char *str);
void	dot_x3(t_dot *dotd, t_obj *obj, const char *str);
void	dot_x3_1(t_dot *dotd);
void	dot_x3_2_1(t_dot *dotd, t_obj *obj);
void	dot_x5(t_dot *dotd, t_obj *obj);
void	dot_x6(t_dot *dotd, t_obj *obj);
void	dot_x7(t_dot *dotd, t_obj *obj);

void	ft_printas_c(t_as *asc, t_obj *obj, const char *str);
void	ft_printas_s(t_obj *obj, const char *str);
void	ft_printas_di(t_obj *obj, const char *str);
void	ft_printas_u(t_obj *obj, const char *str);
void	ft_printas_x(t_obj *obj, char *hex, const char *str);
void	ft_printas_p(t_obj *obj, char *hex, const char *str);

void	as_d(t_as *asd, const char *str, t_obj *obj);
void	dot_s_1(t_dot *dots, t_obj *obj);
void	as_d2(t_as *asd, t_obj *obj);
void	as_p(t_as *asd, const char *str, t_obj *obj);
void	as_s1(t_as *ass, t_obj *obj);
void	as_s2(t_as *ass);
void	as_s3(t_as *ass, const char *str, t_obj *obj);
void	as_s3_3(t_as *ass, t_obj *obj);
void	as_s3_4(t_as *ass, t_obj *obj, const char *str);
void	as_s3_5(t_as *ass, t_obj *obj);
void	as_s3_2(t_as *ass, t_obj *obj, const char *str);
void	as_s3_2_1(t_as *ass, t_obj *obj);

#endif