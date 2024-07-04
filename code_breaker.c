#include "code_breaker.h"

char    *code_breaker(char *string);
int		*sort_list(int	*liste);

char    *code_breaker(char *string)
{
	// char	*result;
	char	*alphabet;
	char	*u_alphabet;
	int		lettres[26];
	int		len_string;
	int		i;
	int		indice;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	u_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	len_string = ft_strlen(string);
	i = 0;
	//Analyse de la fréquence des lettres
	while (string[i])
	{
		if (ft_strchr(string[i], alphabet) != -1 || ft_strchr(string[i], u_alphabet) == -1) //Si le caractère est une lettre
		{
			indice = ft_strchr(string[i], alphabet);
			if (indice == -1)
				indice = ft_strchr(string[i], u_alphabet);
			lettres[indice] += 1;
		}
		i++;
	}
	sort_list(lettres);


	// result = (char *)malloc((len_string + 1) * sizeof(char));
	// return (result);
}

int		*sort_list(int	*liste)
{
// 	int	i;
// 	int	min;

// 	i = 0;
// 	while(liste[i])
// 	//  1  5  6 45  2 11  4  3  7  7  8  4  9  7
// 	//  1  2  3  4  4  5  6  7  7  7  8  9 11 45
// 	min = liste[i];
// 	i++;
}