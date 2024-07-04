#include "code_breaker.h"

int ft_strlen(char *string);

int ft_strlen(char *string)
{
    int i;

    i = 0;
    while(string[i])
        i++;
    return (i);
}

//Renvoit l'indice de la première apparition du caractère c dans la chaîne string ou -1 en cas d'absence.
int	ft_strchr(char c, char *string)
{
	int	i;

	while (string[i])
	{
		if (string[i] == c)
			return (i);
		i++;
	}
	return (-1);
}