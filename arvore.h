#ifndef ARVORE_H
#define ARVORE_H

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ALFABETO 26

typedef struct NoTrie
{
    struct NoTrie *filhos[ALFABETO];
    int FimDaPalavra;
} NoTrie;

NoTrie *criarNo();

void inserirPalavra(NoTrie *raiz, char *palavra);
int buscarPalavra(NoTrie *raiz, char *palavra);

#endif