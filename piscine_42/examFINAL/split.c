#include <stdlib.h>


int nb_word(char *str, char *sep)
{
	int i;
	i = 0;
	int nb;
	nb = 0;
	while(str[i])
	{
		while(str[i] && in_charset(str[i], sep) == 1)
			i++;
		if (str[i])
			nb++;
		while(str[i] && in_charset(str[i], sep) == 1)
			i++;
		return(nb);
	}

}
int word_len(char *str, char *sep)
{
	int i;
	i = 0;
	while(str[i] && in_charset(str[i], sep) == 0)
		i++;
	return(i);
}
int strndup(char **tab, char *str, int n)
{
	int i;
	i = 0;
	
	*tab = malloc(sizeof(char) * (n = 1));
	if (!*tab)
		return(0);
	while(str[i] && i < n)
	{
		*tab[i] = str[i];
		i++;
	}
	while(i < n)
	{
		*tab[i] = '\0';
		i++;
	}
	(*tab)[i] = '\0';
	return(n);
}



char **ft_split(char *str, char *charset)
{
	int i;
	int j;
	int lenW;
	int **tab;

	i = 0;
	j = -1;
	if (!str || !charset)
		return (NULL);
	tab = malloc(sizeof(char *) * (nb_word(str, charset) + 1));
	if (!tab)
		return(NULL);
	while(++j < nb_word(str, charset))
	{
		while(str[i] && in_charset(str[i], charset))
			i++;
		lenW = word_len(str + i, charset);
		i += strndup(&tab[j], str + i, lenW);
		if (!tab[j])
			return (NULL);
	}
	tab[j] = NULL;
	return(tab);
}
