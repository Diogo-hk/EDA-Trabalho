#include "arvore.h"

NoTrie *criarNo()
{
    NoTrie *No = (NoTrie *)malloc(sizeof(NoTrie));
    if (No)
    {
        No->FimDaPalavra = 0;
        memset(No->filhos, 0, sizeof(No->filhos));
    }
    return No;
}

void inserirPalavra(NoTrie *raiz, char *palavra)
{
    NoTrie *NoAtual = raiz;
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++)
    {
        int indice = tolower(palavra[i] - 'a');
        if (NoAtual->filhos[indice] == NULL)
        {
            NoAtual->filhos[indice] = criarNo;
        }

        NoAtual = NoAtual->filhos[indice];
    }
    NoAtual->FimDaPalavra = 1;
}