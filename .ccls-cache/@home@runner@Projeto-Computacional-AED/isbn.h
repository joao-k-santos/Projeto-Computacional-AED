/*Esse arquivo se refere a criacao das classes inspiradad na forma de
organizacao ISBN, em que os livros sao classificados por título, autor,  país,
editora e a edição. */
#ifndef isbn
#define isbn

#include <iostream>
#include <list>
#include <string>
using namespace std;

class obra {
public:
  string titulo;
  string autor;
  string ::iterator it;
};

class livro : public obra {
public:
  string pais;
  string editora;
  int edicao;
  int num_de_livros;
  list<livro> livros;

public:
  void alocaLivros();
  void adicionarlivro();
  void selecionarbuscalivro();
  void busca_titulo();
  void busca_autor();
  void busca_pais();
  void busca_editora();
  void ordenalivrostitulo();
  void ordenalivrosautor();
  void ordenalivrospais();
  void ordenalivroseditora();
  void exibe();
};

class artigo : public obra {
public:
  int ano_de_publicacao;
  int num_de_artigos;
  list<artigo> artigos;

public:
  void alocaArtigos();

  void adicionarartigo();
  void selecionarbuscaartigo();
  void busca_tituloArt();
  void busca_autorArt();
  void busca_anoArt();
  void ordenaartigostitulo();
  void ordenaartigosautor();
  void ordenaartigosano();
  void exibe();
};

class TCC : public obra {
public:
  int ano_de_publicacao;
  int num_de_tcc;
  list<TCC> tccs;

public:
  void alocaTCC();
  void adicionartcc();
  void ordenaTCC_titulo();
  void ordenaTCC_autor();
  void ordenaTCC_ano();
  void selecionarbuscatcc();
  void busca_tituloTCC();
  void busca_autorTCC();
  void busca_anoTCC();
  void exibe();
};

class tese : public obra {
public:
  int ano_de_publicacao;
  string tipo; // mestrado ou doutorado
  int num_de_teses;
  list<tese> teses;

public:
  void alocatese();
  void adicionartese();
  void ordenatese_titulo();
  void ordenatese_autor();
  void ordenatese_ano();
  void selecionarbuscatese();
  void busca_tituloTese();
  void busca_autorTese();
  void busca_anoTese();
  void exibe();
};

#endif
