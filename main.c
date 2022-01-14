#include "get_next_line.h"
# include <stdio.h>
# include <fcntl.h>

//# define BUFFER_SIZE 12

int	main()
{
	int		fd;
	char	*line;

	//	line = "A";
	fd = open("TEST.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
		line = get_next_line(fd);
		free(line);
	}
//	while(1)
//		;
	return (0);
}
