#include <unistd.h>
int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return (0);

}
char *ftstrcat(char *dest, char *src)
{
	int i = 0;
	int lenDest = ft_strlen(dest);
	while(src[i])
	{
		dest[lenDest + i] = src[i];
		i++;
	}
	dest[lenDest + i] = '\0';
	return (dest);
}
int main()
{
	printf("%s", ftstrcat("alexis", "vaures"));
}
