#include <unistd.h>
void afficheUnion(char *s1, char *s2)
{
	int i = 0;
	int tab[256] = {0};

	while(s1[i])
	{
		if (tab[s1[i]] == 0)
		{
			write(1, &s1[i], 1);
			tab[s1[i]] = 1;
		}
		i++;
	}
	i = 0;
	while(s2[i])
	{
		if (tab[s2[i]] == 0)
		{
			write(1, &s2[i], 1);
			tab[s2[i]] = 1;
		}
		i++;
	}
}
int main(int argc, char **argv)
{
	if (argc == 3)
		afficheUnion(argv[1], argv[2]);
	write(1, "\n", 1);
}
