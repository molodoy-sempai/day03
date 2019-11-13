#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int i;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}

	else if (nb < 0)
	{
		ft_putchar('-');
			i = nb * -1;
	}
	else
	{
			i = nb;
	if (i >= 10)
	{
			ft_putnbr(i / 10);
	ft_putchar(i % 10 + 48);
	}
	}
}

int main()
{
	int x;

	x = -2147483648;
	ft_putnbr(x);
	ft_putchar('\n');
	return (0);
}
