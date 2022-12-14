/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdkhissi <mdkhissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:39:27 by mdkhissi          #+#    #+#             */
/*   Updated: 2022/11/27 04:14:57 by mdkhissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*prev;
	struct s_list	*next;
}	t_list;

long	x_sign(long x, int sign);
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
char	*ft_itoa(int n);

int		ft_satoi(const char *str, int *n, int s);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

int		ft_isspace(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstdel(t_list **alst, t_list *lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int		ft_lstsize(t_list *lst);
t_list	*ft_lstfind(t_list *alst, void *content2, int (*cmp)(void *, void *));

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num, size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_free(void *ptr);
void	*ft_free_ptrs4(void *p1, void *p2, void *p3, void *p4);

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr(char *s);

char	**ft_free_sar(char **sarr);
void	*ft_free_sars4(char ***sarr1, char ***sarr2,
			char ***sarr3, char ***sarr4);
void	ft_iter_sar(char **sarr, void (*f)(char *));
int		ft_sarlen(char **sarr);
char	**empty_sar(void);

size_t	ft_sarcpy(char **dest, char **src);
size_t	ft_sarncpy(char **dest, char **src, size_t n);
size_t	ft_sarcat(char **dest, char **src);
size_t	ft_sarncat(char **dest, char **src, size_t n);
char	**ft_sardup(char **src);

char	**ft_sarndup(char **src, size_t n);
char	**ft_sarjoin(char **sar1, char **sar2);
char	**ft_sarnjoin(char **sar1, char **sar2, size_t n);
char	*ft_sarstr(char **sar, const char *s);
char	*ft_sarnstr(char **sar, const char *s, size_t n);

char	*ft_strsar(char *s, char **sar);
char	*ft_strnsar(char *s, char **sar, size_t n);
ssize_t	ft_strisar(char *s, char **sar);
ssize_t	ft_strinsar(char *s, char **sar, size_t n);

char	**ft_split(const char *s, char c);

size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *src);
char	*ft_strndup(const char *src, size_t n);

size_t	ft_strcpy(char *dest, const char *src);
size_t	ft_strncpy(char *dest, const char *src, size_t n);
size_t	ft_strcat(char *dest, const char *src);
size_t	ft_strncat(char *dest, const char *src, size_t n);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_substr(const char *s, size_t start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strnjoin(const char *s1, const char *s2, size_t n);
char	*ft_strnappend(char *s1, const char *s2, size_t n);
char	*ft_strappend(char *s1, const char *s2);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strepchr(char *s, char c, char r);
char	*ft_strrepchr(char *s, char c, char r);
char	*ft_strstr(const char *s1, const char *s2);

char	*ft_strtrim(const char *src, const char *set);
void	ft_strepallch(char *s, char c, char r);
void	ft_putendl(char *s);

#endif
