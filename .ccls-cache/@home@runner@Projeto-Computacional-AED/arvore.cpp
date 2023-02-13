// Implementação da biblioteca arvore.h

#include "arvore.h"
#include <iostream>

using namespace std;

// Métodos da classe árvore
arvore ::arvore() {
  raiz = NULL;
  no_obra = NULL;
  no_artigo = NULL;
  no_tcc = NULL;
  no_tese = NULL;
}

void arvore ::destroiArvore(arvore *raiz) {

  // Método que destrói a árvore
  // da memória

  if (raiz != NULL) {
    destroiArvore(raiz->no_obra);
    destroiArvore(raiz->no_tcc);
    destroiArvore(raiz->no_tese);
    destroiArvore(raiz->no_livro);
    destroiArvore(raiz->no_artigo);
    delete raiz;
  }
  raiz = NULL;
}

arvore ::~arvore() {

  // Método destrutor da
  // classe árvore

  destroiArvore(raiz);
}

void arvore ::insereNo(arvore *raiz, obra *obra1, livro *livro1,
                       artigo *artigo1, TCC *tcc1, tese *tese1) {

  // Método que insere os nós na árvore
  // para isso insere somente o nó do
  // tipo desejado, para isso somente
  // entrada desejada deverá ser
  // diferente de NULL

  // Faz as comparações para descobrir
  // qual a entrada desejada

  if (obra1 != NULL) {
    no_obra = new arvore;
    no_obra->item_obra = *obra1;
    no_obra->no_tese = NULL;
    no_obra->no_livro = NULL;
    no_obra->no_tcc = NULL;
    no_obra->no_artigo = NULL;
    no_obra->raiz = raiz;
  }

  if (livro1 != NULL) {
    no_livro = new arvore;
    no_livro->item_livro = *livro1;
    no_livro->no_tese = NULL;
    no_livro->no_obra = NULL;
    no_livro->no_livro = NULL;
    no_livro->no_tcc = NULL;
    no_livro->no_artigo = NULL;
    no_livro->raiz = raiz;
  }

  if (artigo1 != NULL) {
    no_artigo = new arvore;
    no_artigo->item_artigo = *artigo1;
    no_artigo->no_tese = NULL;
    no_artigo->no_obra = NULL;
    no_artigo->no_livro = NULL;
    no_artigo->no_tcc = NULL;
    no_artigo->no_artigo = NULL;
    no_artigo->raiz = raiz;
  }

  if (tcc1 != NULL) {
    no_tcc = new arvore;
    no_tcc->item_tcc = *tcc1;
    no_tcc->no_tese = NULL;
    no_tcc->no_obra = NULL;
    no_tcc->no_livro = NULL;
    no_tcc->no_tcc = NULL;
    no_tcc->no_artigo = NULL;
    no_tcc->raiz = raiz;
  }

  if (tese1 != NULL) {
    no_tese = new arvore;
    no_tese->item_tese = *tese1;
    no_tese->no_tese = NULL;
    no_tese->no_obra = NULL;
    no_tese->no_livro = NULL;
    no_tese->no_tcc = NULL;
    no_tese->no_artigo = NULL;
    no_tese->raiz = raiz;
  }
}
