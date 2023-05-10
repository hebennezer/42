#include <unistd.h>

int	main(int argc, char **argv)
{
	int c;

	c = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][c] != '\0')
	{
		if (argv[1][c] == argv[2][0])
		{
			argv[1][c] = argv[3][0];
		}
		write(1, &argv[1][c], 1);
		c++;
	}
	write(1, "\n", 1);
	return (0);
}