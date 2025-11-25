/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:40:26 by jose-an2          #+#    #+#             */
/*   Updated: 2025/11/25 23:32:45 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <stdio.h>

//functions declarations

//libc functions
int		ft_isalpha(char c);//DONE
int		ft_isdigit(char c);//DONE
int		ft_isalnum(char c);//DONE
int		ft_isascii(int c);//DONE
int		ft_isprint(int c);//DONE
int		ft_strlen(const char *str);//DONE
void	*ft_memset(void *s, int c, size_t n);//DONE
void	ft_bzero(void *s, size_t n);//DONE
void	*ft_memcpy(void *dest, const void *src, size_t n);//DONE
void	*ft_memmove(void *dest, const void *src, size_t n);//DONE
size_t	ft_strlcpy(char *dst, const char *src, size_t n);//DONE
size_t	ft_strlcat(char *dst, const char *src, size_t n);//DONE
int		ft_toupper(int c);//DONE
int		ft_tolower(int c);//DONE
char	*ft_strchr(const char *s, int c);//DONE
char	*ft_strrchr(const char *s, int c);//DONE
int		ft_strncmp(const char *s1, const char *s2, size_t n);//DONE
void	*ft_memchr(const void *s, int c, size_t n);//DONE
int		ft_memcmp(const void *s1, const void *s2, size_t n);//DONE
char	*ft_strnstr(const char *big, const char *little, size_t len);//DONE
int		ft_atoi(const char *nptr);//DONE
void	*ft_calloc(size_t count, size_t size);//DONE
char	*ft_strdup(const char *s1);//DONE
//additional functions
char	*ft_substr(char const *s, unsigned int start, size_t len);//DONE
char	*ft_strjoin(char const *s1, char const *s2);//DONE
char	*ft_strtrim(char const *s1, char const *set);//DONE
char	**ft_split(char const *s, char c);//DONE
char	*ft_itoa(int n);//DONE
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));//DONE
void	ft_striteri(char *s, void (*f)(unsigned int, char*));//DONE
void	ft_putchar_fd(char c, int fd);//DONE
void	ft_putstr_fd(char *s, int fd);//DONE
void	ft_putendl_fd(char *s, int fd);//DONE
void	ft_putnbr_fd(int n, int fd);//DONE
//BONUS FUNCTIONS
typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *));
int		ft_lstsize(t_list *lst);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);

#endif
