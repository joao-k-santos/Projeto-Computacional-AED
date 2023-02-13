#ifndef ARVORE_H
#define ARVORE_H

#include "isbn.h"

class arvore {

  // Classe que representa uma árvore
  // que é a estrutura de dados usada
  // no projeto

  // Atributos responsáveis pela TAD
  //árvore

public:
  arvore *raiz;
  arvore *no_obra;
  arvore *no_livro;
  arvore *no_artigo;
  arvore *no_tese;
  arvore *no_tcc;

  // Atributos que carregam as informações das obras

  obra item_obra;
  livro item_livro;
  artigo item_artigo;
  tese item_tese;
  TCC item_tcc;

public:
  arvore();
  void destroiArvore(arvore *raiz);
  ~arvore();
  void insereNo(arvore *raiz, obra *obra1, livro *livro1, artigo *artigo1,
                TCC *tcc1, tese *tese1);
};

#endif