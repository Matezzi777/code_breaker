#include "code_breaker.h"

void	main(int argc, char **argv)
{
	if (argc == 2)
		code_breaker(argv[1]);
	else
		printf("ERREUR : Nombre d'arguments invalide.\nNombre d'arguments attendu : 1.\nNombre d'arguments fournis : %d", argc - 1);
}