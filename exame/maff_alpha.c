#include <unistd.h>

int	main(void)
{
	char	i;
	char	j;

	i = 'a';
	j = 'B';
	while (j <= 'Z')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		i += 2;
		j += 2;
	}
	write(1, "\n", 1);
	return (0);
}