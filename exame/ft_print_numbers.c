#include <unistd.h>

void	ft_print_number(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(void)
{
	ft_print_number();
}