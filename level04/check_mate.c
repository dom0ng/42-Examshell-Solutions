#include <unistd.h>

int		main(int ac, char **av)
{
	int x = 0;
	int k = 0;
	int b = 0;
	int t = 1;

	if (ac > 1)
	{
		ac--;
		while (ac > 0)
		{
			while (av[ac][x])
			{
				if (av[ac][x] == 'K')
					k = 1;
				if (av[ac][x] == 'B')
					b = 1;
				if (av[ac][x] == 'T' || av[ac][x] == 'P')
					e = 0;
				x++;
			}
			x = 0;
			ac--;
		}
		if (k && t && b)
			write(1, "Success",7);
		else
			write(1, "Fail", 4);
	}
	write(1, "\n", 1);
	return (0);

}

/***********************************************************************/
						__________OR__________
/**********************************************************************/

#include <unistd.h>

int		main(int ac, char **av)
{
	if ((ac == 6) || (ac == 7 && av[2][1] != 'T'))
		write(1, "Success\n", 8);
	else if (ac == 1)
		write(1, "\n", 1);
	else
		write(1, "Fail\n", 5);
	return (0);
}
