#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_put_numbers(void)
{
	ft_putstr("0123456789");
}

int	main(void)
{
	ft_put_numbers();
	return 0;
}
