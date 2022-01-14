#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*buf_strjoin(char *s1, char const *s2, size_t	n);
void	*ft_memcpy(char *dst, const void *src, size_t	n);
size_t	ft_strlen(const char *s);
int		fun_chek(char *s);
int		buf_creater(char **buf, int fd);

#endif
