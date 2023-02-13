/* Esse arquivo sera usado para a construcao das funcoes que iremos usar no int
 * main principal */

#include "isbn.h"
#include <iostream>

using namespace std;

void livro::alocaLivros() {
  cout << "Quantos livros possui?" << endl;
  cin >> num_de_livros;
}

void livro ::adicionarlivro() {

  int i;
  livro aux;
  alocaLivros();

  for (i = 0; i < num_de_livros; i++) {
    cout << "Insira o titulo do livro: \n";
    cin >> aux.titulo;
    cout << "Insira o autor do livro: \n";
    cin >> aux.autor;
    cout << "Insira o pais de origem do livro: \n";
    cin >> aux.pais;
    cout << "Insira a editora do livro: \n";
    cin >> aux.editora;
    cout << "Insira a edicao do livro\n";
    cin >> aux.edicao;
    livros.push_back(aux);
  }
}

void livro ::exibe() {
  list<livro>::iterator it;
  livro aux;
  for (it = livros.begin(); it != livros.end(); it++) {
    cout << "Entrou no for exibe";
    aux = *it;
    cout << "Titulo do livro: " << aux.titulo << endl;
    cout << "Autor: " << aux.autor << endl;
    cout << "Pais : " << aux.pais << endl;
    cout << "Editora:  " << aux.editora << endl;
    cout << "Edicao Numero: " << aux.edicao << endl;
  }
}
void artigo::alocaArtigos() {
  cout << "Quantos artigos possui?" << endl;
  cin >> num_de_artigos;
}

void artigo::adicionarartigo() {

  int i;
  artigo aux;
  alocaArtigos();

  for (i = 0; i < num_de_artigos; i++) {
    cout << "Insira o titulo do artigo: \n";
    cin >> aux.titulo;
    cout << "Insira o autor do artigo: \n";
    cin >> aux.autor;
    cout << "Insira o ano em que foi publicado o artigo: \n";
    cin >> aux.ano_de_publicacao;
    artigos.push_back(aux);
  }
}

void artigo::exibe() {

  list<artigo>::iterator it;
  artigo aux;
  for (it = artigos.begin(); it != artigos.end(); it++) {
    aux = *it;
    cout << "Título do artigo: " << aux.titulo << endl;
    cout << "Autor do artigo: " << aux.autor << endl;
    cout << "Ano de publicação do artigo: " << aux.ano_de_publicacao << endl;
  }
}

void TCC::alocaTCC() {
  cout << "Quantos TCC possui?" << endl;
  cin >> num_de_tcc;
}

void TCC ::adicionartcc() {
  int i;
  TCC aux;
  alocaTCC();

  for (i = 0; i < num_de_tcc; i++) {
    cout << "Insira o titulo do TCC: \n";
    cin >> aux.titulo;
    cout << "Insira o autor do TCC: \n";
    cin >> aux.autor;
    cout << "Insira o ano em que foi publicado o TCC: \n";
    cin >> aux.ano_de_publicacao;
    tccs.push_back(aux);
  }
}

void TCC ::exibe() {

  list<TCC>::iterator it;
  TCC aux;
  for (it = tccs.begin(); it != tccs.end(); it++) {
    aux = *it;
    cout << "Título do TCC: " << aux.titulo << endl;
    cout << "Autor do TCC: " << aux.autor << endl;
    cout << "Ano de publicação do TCC: " << aux.ano_de_publicacao << endl;
  }
}

void tese::alocatese() {
  cout << "Quantas teses possui?\n";
  cin >> num_de_teses;
}

void tese ::adicionartese() {

  int i;
  tese aux;
  alocatese();

  for (i = 0; i < num_de_teses; i++) {
    cout << "Insira o titulo da tese: \n";
    cin >> aux.titulo;
    cout << "Insira o autor da tese: \n";
    cin >> aux.autor;
    cout << "Insira o ano em que foi publicado a tese: \n";
    cin >> aux.ano_de_publicacao;
    teses.push_back(aux);
  }
}
void tese ::exibe() {
  list<tese>::iterator it;
  tese aux;
  for (it = teses.begin(); it != teses.end(); it++) {
    aux = *it;
    cout << "Título da tese: " << aux.titulo << endl;
    cout << "Autor: " << aux.autor << endl;
    cout << "Ano de publicação da tese: " << aux.ano_de_publicacao << endl;
  }
}

void livro::selecionarbuscalivro() {

} 

void livro::ordenalivrostitulo() {
  int i, j = 1;

  livro aux;
  livro aux2;

  list<livro>::iterator it;
  list<livro>::iterator it_livro1;
  list<livro>::iterator it_livro2;
  string::iterator it_caso_igual;

  bool continua, troca;
  continua = 1;

  while (continua) {

    troca = false;

    it_livro1 = livros.begin();
    it_livro2 = it_livro1++;

    for (i = 0; i < num_de_livros; i++) {

      if (it_livro2 != livros.end() && it_livro1 != livros.end()) {
        aux = *it_livro1;
        aux2 = *it_livro2;
        if (aux.titulo[0] <
            aux2.titulo[0]) { // se o termo i for maior do que o
                              // termo i+1, eles serï¿½o trocados
          swap(*it_livro2, *it_livro1);
          troca = true;
        }

        if (aux.titulo[0] == aux2.titulo[0]) {
          for (it_caso_igual = aux.titulo.begin();
               it_caso_igual < aux.titulo.end(); it_caso_igual++) {
            if (aux.titulo[j] <
                aux2.titulo[j]) { // se o termo i for maior do que o
                                  // termo i+1, eles serï¿½o trocados
              swap(*it_livro2, *it_livro1);
              troca = true;
            }
          }
        }
      }
      it_livro1++;
      it_livro2++;
    }
    if (troca == false) {
      continua = false; // se nï¿½o houver nenhuma trca durante a varredura, o
                        // programa sai do loop while
    }
  }
}
void livro::ordenalivrosautor() {
  int i, j = 1;

  livro aux;
  livro aux2;

  list<livro>::iterator it;
  list<livro>::iterator it_livro1;
  list<livro>::iterator it_livro2;
  string::iterator it_caso_igual;

  bool continua, troca;
  continua = 1;

  while (continua == true) {

    troca = false;

    it_livro1 = livros.begin();
    it_livro2 = it_livro1++;

    for (i = 0; i < num_de_livros - 1; i++) {

      aux = *it_livro1;
      aux2 = *it_livro2;
      if (aux.autor[0] < aux2.autor[0]) { // se o termo i for maior do que o
                                          // termo i+1, eles serï¿½o trocados
        swap(*it_livro2, *it_livro1);
        troca = true;
      }

      if (aux.autor[0] == aux2.autor[0]) {
        for (it_caso_igual = aux.autor.begin();
             it_caso_igual != aux2.autor.end(); it_caso_igual++) {
          if (aux.autor[j] <
              aux2.autor[j]) { // se o termo i for maior do que o
                               // termo i+1, eles serï¿½o trocados
            swap(*it_livro2, *it_livro1);
            troca = true;
          }
        }
      }
      it_livro1++;
      it_livro2++;
    }

    if (troca == false) {
      continua = false; // se nï¿½o houver nenhuma trca durante a varredura, o
                        // programa sai do loop while
    }
  }
}

void livro::ordenalivrospais() {
  int i, j = 1;

  livro aux;
  livro aux2;

  list<livro>::iterator it;
  list<livro>::iterator it_livro1;
  list<livro>::iterator it_livro2;
  string::iterator it_caso_igual;

  bool continua, troca;
  continua = 1;

  while (continua == true) {

    troca = false;

    it_livro1 = livros.begin();
    it_livro2 = it_livro1++;
    for (i = 0; i < num_de_livros - 1; i++) {

      aux = *it_livro1;
      aux2 = *it_livro2;
      if (aux.pais[0] < aux2.pais[0]) { // se o termo i for maior do que o termo
                                        // i+1, eles serï¿½o trocados
        swap(*it_livro2, *it_livro1);
        troca = true;
      }

      if (aux.pais[0] == aux2.pais[0]) {
        for (it_caso_igual = aux.pais.begin(); it_caso_igual != aux.pais.end();
             it_caso_igual++) {
          if (aux.pais[j] < aux2.pais[j]) { // se o termo i for maior do que o
                                            // termo i+1, eles serï¿½o trocados
            swap(*it_livro2, *it_livro1);
            troca = true;
          }
        }
      }
      it_livro1++;
      it_livro2++;
    }
    if (troca == false) {
      continua = false; // se nï¿½o houver nenhuma trca durante a varredura, o
                        // programa sai do loop while
    }
  }
}
void livro::ordenalivroseditora() {
  int i, j = 1;

  livro aux;
  livro aux2;

  list<livro>::iterator it;
  list<livro>::iterator it_livro1;
  list<livro>::iterator it_livro2;
  string::iterator it_caso_igual;

  bool continua, troca;
  continua = 1;

  while (continua == true) {

    troca = false;

    it_livro1 = livros.begin();
    it_livro2 = it_livro1++;

    for (i = 0; i < num_de_livros - 1; i++) {

      aux = *it_livro1;
      aux2 = *it_livro2;

      if (aux.editora[0] < aux.editora[0]) { // se o termo i for maior do que o
                                             // termo i+1, eles serï¿½o trocados
        swap(*it_livro2, *it_livro1);
        troca = true;
      }

      if (aux.editora[0] == aux2.editora[0]) {
        for (it_caso_igual = aux.editora.begin();
             it_caso_igual != aux.editora.end(); it_caso_igual++) {
          if (aux.editora[j] <
              aux2.editora[j]) { // se o termo i for maior do que o
                                 // termo i+1, eles serï¿½o trocados
            swap(*it_livro2, *it_livro1);
            troca = true;
          }
        }
      }
      it_livro1++;
      it_livro2++;
    }
    if (troca == false) {
      continua = false; // se nï¿½o houver nenhuma trca durante a varredura, o
                        // programa sai do loop while
    }
  }
}

void artigo::ordenaartigostitulo() {
  int i, j = 1;

  artigo aux;
  artigo aux2;

  list<artigo>::iterator it;
  list<artigo>::iterator it_artigo1;
  list<artigo>::iterator it_artigo2;
  string::iterator it_caso_igual;

  bool continua, troca;
  continua = 1;

  while (continua == true) {

    troca = false;
    it_artigo1 = artigos.begin();
    it_artigo2 = it_artigo1++;

    for (i = 0; i < num_de_artigos - 1; i++) {
      aux = *it_artigo1;
      aux2 = *it_artigo2;
      if (aux.titulo[0] < aux2.titulo[0]) { // se o termo i for maior do que o
                                            // termo i+1, eles serï¿½o trocados
        swap(*it_artigo2, *it_artigo1);
        troca = true;
      }

      if (aux.titulo[0] == aux2.titulo[0]) {
        for (it_caso_igual = aux.titulo.begin();
             it_caso_igual != aux.titulo.end(); it_caso_igual++) {
          if (aux.titulo[j] <
              aux2.titulo[j]) { // se o termo i for maior do que o
                                // termo i+1, eles serï¿½o trocados
            swap(*it_artigo2, *it_artigo1);
            troca = true;
          }
        }
      }
      it_artigo1++;
      it_artigo2++;
    }
    if (troca == false) {
      continua = false; // se nï¿½o houver nenhuma trca durante a varredura, o
                        // programa sai do loop while
    }
  }
}
void artigo::ordenaartigosautor() {
  int i, j = 1;

  artigo aux;
  artigo aux2;

  list<artigo>::iterator it;
  list<artigo>::iterator it_artigo1;
  list<artigo>::iterator it_artigo2;
  string::iterator it_caso_igual;

  bool continua, troca;
  continua = 1;

  while (continua == true) {

    troca = false;

    it_artigo1 = artigos.begin();
    it_artigo2 = it_artigo1++;
    for (i = 0; i < num_de_artigos - 1; i++) {
      aux = *it_artigo1;
      aux2 = *it_artigo2;

      if (aux.autor[0] < aux2.autor[0]) { // se o termo i for maior do que o
                                          // termo i+1, eles serï¿½o trocados
        swap(*it_artigo2, *it_artigo1);
        troca = true;
      }

      if (aux.autor[0] == aux2.autor[0]) {
        for (it_caso_igual = aux.autor.begin(); it_caso_igual < aux.autor.end();
             it_caso_igual++) {
          if (aux.autor[j] <
              aux2.autor[j]) { // se o termo i for maior do que o
                               // termo i+1, eles serï¿½o trocados
            swap(*it_artigo2, *it_artigo1);
            troca = true;
          }
        }
      }
      it_artigo1++;
      it_artigo2++;
    }

    if (troca == false) {
      continua = false; // se nï¿½o houver nenhuma trca durante a varredura, o
                        // programa sai do loop while
    }
  }
}

void artigo::ordenaartigosano() {
  // Método que ordena os artigos
  // de acordo com a data de publicação

  int i, j, pivot, parede, troca;

  artigo aux;
  artigo aux2;

  list<artigo>::iterator it;
  list<artigo>::iterator it_artigo1;
  list<artigo>::iterator it_artigo2;

  // inicializa a parede no comeco do vetor

  parede = 0;

  // inicializa o pivot no final do vetor

  pivot = num_de_artigos - 1;

  while (pivot != 0) {
    troca = 0;
    parede = 0;

    it = artigos.begin();
    advance(it, pivot);
    it_artigo2 = it;
    it_artigo1 = artigos.begin();
    for (i = 0; i < num_de_artigos - 1; i++) {
      aux = *it_artigo1;
      aux2 = *it_artigo2;

      if ((aux2.ano_de_publicacao > aux.ano_de_publicacao) && (pivot > i)) {
        // caso o pivot seja maior do que o
        // elemento q está sendo comparado,
        // esse elemento passa para trás da parede

        swap(*it_artigo2, *it_artigo1);
        parede++; // apos isso a parede anda 1 espaco para frente

        troca++;
      }
      it_artigo1++;
    }

    if (troca >= pivot) {
      pivot--;
      it = artigos.begin();
      advance(it, pivot);
      it_artigo2 = it;
      parede = 0; // caso não haja nenhuma troca durante a
                  // varredura, o pivot move 1 casa
    }

    if (pivot == 0) {

      // se o pivot atingir a posição 0
      // significa q o vetor está ordendado
      pivot = 0;
    }

    if (troca < pivot) {
      // apos a varredura o pivot é movido para ao lado da parede
      it_artigo1 = artigos.begin();
      advance(it_artigo1, parede);
      swap(*it_artigo2, *it_artigo1);
    }

    parede = 0;
  }
}

void TCC::ordenaTCC_titulo() {

int i, j = 1;

  TCC aux;
  TCC aux2;

  list<TCC>::iterator it;
  list<TCC>::iterator it_TCC1;
  list<TCC>::iterator it_TCC2;
  string::iterator it_caso_igual;

  bool continua, troca;
  continua = 1;

  while (continua == true) {

    troca = false;
    it_TCC1 = tccs.begin();
    it_TCC2 = it_TCC1++;

    for (i = 0; i < num_de_tcc - 1; i++) {
      aux = *it_TCC1;
      aux2 = *it_TCC2;
      if (aux.titulo[0] < aux2.titulo[0]) { // se o termo i for maior do que o
                                            // termo i+1, eles serï¿½o trocados
        swap(*it_TCC2, *it_TCC1);
        troca = true;
      }

      if (aux.titulo[0] == aux2.titulo[0]) {
        for (it_caso_igual = aux.titulo.begin();
             it_caso_igual != aux.titulo.end(); it_caso_igual++) {
          if (aux.titulo[j] <
              aux2.titulo[j]) { // se o termo i for maior do que o
                                // termo i+1, eles serï¿½o trocados
            swap(*it_TCC2, *it_TCC1);
            troca = true;
          }
        }
      }
      it_TCC1++;
      it_TCC2++;
    }
    if (troca == false) {
      continua = false; // se nï¿½o houver nenhuma trca durante a varredura, o
                        // programa sai do loop while
    }
  }  
}

void TCC::ordenaTCC_autor() {
int i, j = 1;

  TCC aux;
  TCC aux2;

  list<TCC>::iterator it;
  list<TCC>::iterator it_TCC1;
  list<TCC>::iterator it_TCC2;
  string::iterator it_caso_igual;

  bool continua, troca;
  continua = 1;

  while (continua == true) {

    troca = false;
    it_TCC1 = tccs.begin();
    it_TCC2 = it_TCC1++;

    for (i = 0; i < num_de_tcc - 1; i++) {
      aux = *it_TCC1;
      aux2 = *it_TCC2;
      if (aux.autor[0] < aux2.autor[0]) { // se o termo i for maior do que o
                                            // termo i+1, eles serï¿½o trocados
        swap(*it_TCC2, *it_TCC1);
        troca = true;
      }

      if (aux.autor[0] == aux2.autor[0]) {
        for (it_caso_igual = aux.autor.begin();
             it_caso_igual != aux.autor.end(); it_caso_igual++) {
          if (aux.autor[j] <
              aux2.autor[j]) { // se o termo i for maior do que o
                                // termo i+1, eles serï¿½o trocados
            swap(*it_TCC2, *it_TCC1);
            troca = true;
          }
        }
      }
      it_TCC1++;
      it_TCC2++;
    }
    if (troca == false) {
      continua = false; // se nï¿½o houver nenhuma trca durante a varredura, o
                        // programa sai do loop while
    }
  }  

  
}





void TCC::ordenaTCC_ano() {

  int i, j, pivot, parede, troca;

  TCC aux;
  TCC aux2;

  list<TCC>::iterator it;
  list<TCC>::iterator it_TCC1;
  list<TCC>::iterator it_TCC2;

  // inicializa a parede no comeco do vetor

  parede = 0;

  // inicializa o pivot no final do vetor

  pivot = num_de_tcc - 1;

  while (pivot != 0) {
    troca = 0;
    parede = 0;

    it = tccs.begin();
    advance(it, pivot);
    it_TCC2 = it;
    it_TCC1 = tccs.begin();
    for (i = 0; i < num_de_tcc - 1; i++) {
      aux = *it_TCC1;
      aux2 = *it_TCC2;

      if ((aux2.ano_de_publicacao > aux.ano_de_publicacao) && (pivot > i)) {
        // caso o pivot seja maior do que o
        // elemento q está sendo comparado,
        // esse elemento passa para trás da parede

        swap(*it_TCC2, *it_TCC1);
        parede++; // apos isso a parede anda 1 espaco para frente

        troca++;
      }
      it_TCC1++;
    }

    if (troca >= pivot) {
      pivot--;
      it = tccs.begin();
      advance(it, pivot);
      it_TCC2 = it;
      parede = 0; // caso não haja nenhuma troca durante a
                  // varredura, o pivot move 1 casa
    }

    if (pivot == 0) {

      // se o pivot atingir a posição 0
      // significa q o vetor está ordendado
      pivot = 0;
    }

    if (troca < pivot) {
      // apos a varredura o pivot é movido para ao lado da parede
      it_TCC1 = tccs.begin();
      advance(it_TCC1, parede);
      swap(*it_TCC2, *it_TCC1);
    }

    parede = 0;
  }
}


void tese::ordenatese_titulo() {
int i, j = 1;

  tese aux;
  tese aux2;

  list<tese>::iterator it;
  list<tese>::iterator it_tese1;
  list<tese>::iterator it_tese2;
  string::iterator it_caso_igual;

  bool continua, troca;
  continua = 1;

  while (continua == true) {

    troca = false;
    it_tese1 = teses.begin();
    it_tese2 = it_tese1++;

    for (i = 0; i < num_de_teses - 1; i++) {
      aux = *it_tese1;
      aux2 = *it_tese2;
      if (aux.titulo[0] < aux2.titulo[0]) { // se o termo i for maior do que o
                                            // termo i+1, eles serï¿½o trocados
        swap(*it_tese2, *it_tese1);
        troca = true;
      }

      if (aux.titulo[0] == aux2.titulo[0]) {
        for (it_caso_igual = aux.titulo.begin();
             it_caso_igual != aux.titulo.end(); it_caso_igual++) {
          if (aux.titulo[j] <
              aux2.titulo[j]) { // se o termo i for maior do que o
                                // termo i+1, eles serï¿½o trocados
            swap(*it_tese2, *it_tese1);
            troca = true;
          }
        }
      }
      it_tese1++;
      it_tese2++;
    }
    if (troca == false) {
      continua = false; // se nï¿½o houver nenhuma trca durante a varredura, o
                        // programa sai do loop while
    }
  }  
  
}

void tese::ordenatese_autor() {
int i, j = 1;

  tese aux;
  tese aux2;

  list<tese>::iterator it;
  list<tese>::iterator it_tese1;
  list<tese>::iterator it_tese2;
  string::iterator it_caso_igual;

  bool continua, troca;
  continua = 1;

  while (continua == true) {

    troca = false;
    it_tese1 = teses.begin();
    it_tese2 = it_tese1++;

    for (i = 0; i < num_de_teses - 1; i++) {
      aux = *it_tese1;
      aux2 = *it_tese2;
      if (aux.autor[0] < aux2.autor[0]) { // se o termo i for maior do que o
                                            // termo i+1, eles serï¿½o trocados
        swap(*it_tese2, *it_tese1);
        troca = true;
      }

      if (aux.autor[0] == aux2.autor[0]) {
        for (it_caso_igual = aux.autor.begin();
             it_caso_igual != aux.autor.end(); it_caso_igual++) {
          if (aux.autor[j] <
              aux2.autor[j]) { // se o termo i for maior do que o
                                // termo i+1, eles serï¿½o trocados
            swap(*it_tese2, *it_tese1);
            troca = true;
          }
        }
      }
      it_tese1++;
      it_tese2++;
    }
    if (troca == false) {
      continua = false; // se nï¿½o houver nenhuma trca durante a varredura, o
                        // programa sai do loop while
    }
  }  
  
}

void tese::ordenatese_ano() {
int i, j, pivot, parede, troca;

  tese aux;
  tese aux2;

  list<tese>::iterator it;
  list<tese>::iterator it_tese1;
  list<tese>::iterator it_tese2;

  // inicializa a parede no comeco do vetor

  parede = 0;

  // inicializa o pivot no final do vetor

  pivot = num_de_teses - 1;

  while (pivot != 0) {
    troca = 0;
    parede = 0;

    it = teses.begin();
    advance(it, pivot);
    it_tese2 = it;
    it_tese1 = teses.begin();
    for (i = 0; i < num_de_teses - 1; i++) {
      aux = *it_tese1;
      aux2 = *it_tese2;

      if ((aux2.ano_de_publicacao > aux.ano_de_publicacao) && (pivot > i)) {
        // caso o pivot seja maior do que o
        // elemento q está sendo comparado,
        // esse elemento passa para trás da parede

        swap(*it_tese2, *it_tese1);
        parede++; // apos isso a parede anda 1 espaco para frente

        troca++;
      }
      it_tese1++;
    }

    if (troca >= pivot) {
      pivot--;
      it = teses.begin();
      advance(it, pivot);
      it_tese2 = it;
      parede = 0; // caso não haja nenhuma troca durante a
                  // varredura, o pivot move 1 casa
    }

    if (pivot == 0) {

      // se o pivot atingir a posição 0
      // significa q o vetor está ordendado
      pivot = 0;
    }

    if (troca < pivot) {
      // apos a varredura o pivot é movido para ao lado da parede
      it_tese1 = teses.begin();
      advance(it_tese1, parede);
      swap(*it_tese2, *it_tese1);
    }

    parede = 0;
  }
  
}

void livro::busca_titulo() {

  list <livro>:: iterator it;
  livro aux;
  string titulo_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o título do livro a ser buscado: " << endl;
  cin >> titulo_aux;

  for (it = livros.begin();it != livros.end();it++) {
    aux = *it;
    if(aux.titulo == titulo_aux) {
      cout << "Livro encontrado: " << endl;
      cout << "Titulo do livro: " << aux.titulo << endl;
      cout << "Autor: " << aux.autor << endl;
      cout << "Pais : " << aux.pais << endl;
      cout << "Editora:  " << aux.editora << endl;
      cout << "Edicao Numero: " << aux.edicao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "Livro não encontrado. Verifique se foi digitado corretamente " << endl;
  }
  
}

void livro:: busca_autor() {
list <livro>:: iterator it;
  livro aux;
  string autor_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o autor do livro a ser buscado: " << endl;
  cin >> autor_aux;

  for (it = livros.begin();it != livros.end();it++) {
    aux = *it;
    if(aux.autor == autor_aux) {
      cout << "Livro encontrado: " << endl;
      cout << "Titulo do livro: " << aux.titulo << endl;
      cout << "Autor: " << aux.autor << endl;
      cout << "Pais : " << aux.pais << endl;
      cout << "Editora:  " << aux.editora << endl;
      cout << "Edicao Numero: " << aux.edicao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "Livro não encontrado. Verifique se foi digitado corretamente " << endl;
  }
    
}

void livro:: busca_pais() {
list <livro>:: iterator it;
  livro aux;
  string pais_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o pais do livro a ser buscado: " << endl;
  cin >> pais_aux;

  for (it = livros.begin();it != livros.end();it++) {
    aux = *it;
    if(aux.pais == pais_aux) {
      cout << "Livro encontrado: " << endl;
      cout << "Titulo do livro: " << aux.titulo << endl;
      cout << "Autor: " << aux.autor << endl;
      cout << "Pais : " << aux.pais << endl;
      cout << "Editora:  " << aux.editora << endl;
      cout << "Edicao Numero: " << aux.edicao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "Livro não encontrado. Verifique se foi digitado corretamente " << endl;
  }
  
}

void livro:: busca_editora() {
  list <livro>:: iterator it;
  livro aux;
  string editora_aux;
  int i=0;
  bool achou = true;

  cout << "Digite a editora do livro a ser buscado: " << endl;
  cin >> editora_aux;

  for (it = livros.begin();it != livros.end();it++) {
    aux = *it;
    if(aux.editora == editora_aux) {
      cout << "Livro encontrado: " << endl;
      cout << "Titulo do livro: " << aux.titulo << endl;
      cout << "Autor: " << aux.autor << endl;
      cout << "Pais : " << aux.pais << endl;
      cout << "Editora:  " << aux.editora << endl;
      cout << "Edicao Numero: " << aux.edicao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "Livro não encontrado. Verifique se foi digitado corretamente " << endl;
  }
  
}


void artigo:: busca_tituloArt() {
  list <artigo>:: iterator it;
  artigo aux;
  string titulo_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o título do artigo a ser buscado: " << endl;
  cin >> titulo_aux;

  for (it = artigos.begin();it != artigos.end();it++) {
    aux = *it;
    if(aux.titulo == titulo_aux) {
      cout << "Artigo encontrado: " << endl;
      cout << "Título do artigo: " << aux.titulo << endl;
      cout << "Autor do artigo: " << aux.autor << endl;
      cout << "Ano de publicação do artigo: " << aux.ano_de_publicacao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "Artigo não encontrado. Verifique se foi digitado corretamente " << endl;
  }
  
}

void artigo:: busca_autorArt() {
 list <artigo>:: iterator it;
  artigo aux;
  string autor_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o autor do artigo a ser buscado: " << endl;
  cin >> autor_aux;

  for (it = artigos.begin();it != artigos.end();it++) {
    aux = *it;
    if(aux.autor == autor_aux) {
      cout << "Artigo encontrado: " << endl;
      cout << "Título do artigo: " << aux.titulo << endl;
      cout << "Autor do artigo: " << aux.autor << endl;
      cout << "Ano de publicação do artigo: " << aux.ano_de_publicacao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "Artigo não encontrado. Verifique se foi digitado corretamente " << endl;
  }
  
}

void artigo:: busca_anoArt() {
 list <artigo>:: iterator it;
  artigo aux;
  int ano_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o ano do artigo a ser buscado: " << endl;
  cin >> ano_aux;

  for (it = artigos.begin();it != artigos.end();it++) {
    aux = *it;
    if(aux.ano_de_publicacao == ano_aux) {
      cout << "Artigo encontrado: " << endl;
      cout << "Título do artigo: " << aux.titulo << endl;
      cout << "Autor do artigo: " << aux.autor << endl;
      cout << "Ano de publicação do artigo: " << aux.ano_de_publicacao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "Artigo não encontrado. Verifique se foi digitado corretamente " << endl;
  }
  
  
}

void TCC::busca_tituloTCC() {
 list <TCC>:: iterator it;
  TCC aux;
  string titulo_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o título do TCC a ser buscado: " << endl;
  cin >> titulo_aux;

  for (it = tccs.begin();it != tccs.end();it++) {
    aux = *it;
    if(aux.titulo == titulo_aux) {
      cout << "TCC encontrado: " << endl;
      cout << "Título do TCC: " << aux.titulo << endl;
      cout << "Autor do TCC: " << aux.autor << endl;
      cout << "Ano de publicação do TCC: " << aux.ano_de_publicacao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "TCC não encontrado. Verifique se foi digitado corretamente " << endl;
  }
   
}

void TCC:: busca_autorTCC() {
   list <TCC>:: iterator it;
  TCC aux;
  string autor_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o autor do TCC a ser buscado: " << endl;
  cin >> autor_aux;

  for (it = tccs.begin();it != tccs.end();it++) {
    aux = *it;
    if(aux.autor == autor_aux) {
      cout << "TCC encontrado: " << endl;
      cout << "Título do TCC: " << aux.titulo << endl;
      cout << "Autor do TCC: " << aux.autor << endl;
      cout << "Ano de publicação do TCC: " << aux.ano_de_publicacao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "TCC não encontrado. Verifique se foi digitado corretamente " << endl;
  }
}

void TCC:: busca_anoTCC() {
   list <TCC>:: iterator it;
  TCC aux;
  int ano_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o ano do TCC a ser buscado: " << endl;
  cin >> ano_aux;

  for (it = tccs.begin();it != tccs.end();it++) {
    aux = *it;
    if(aux.ano_de_publicacao == ano_aux) {
      cout << "TCC encontrado: " << endl;
      cout << "Título do TCC: " << aux.titulo << endl;
      cout << "Autor do TCC: " << aux.autor << endl;
      cout << "Ano de publicação do TCC: " << aux.ano_de_publicacao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "TCC não encontrado. Verifique se foi digitado corretamente " << endl;
  }
}

void tese::busca_tituloTese() {
 list <tese>:: iterator it;
  tese aux;
  string titulo_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o título da tese a ser buscado: " << endl;
  cin >> titulo_aux;

  for (it = teses.begin();it != teses.end();it++) {
    aux = *it;
    if(aux.titulo == titulo_aux) {
      cout << "Tese encontrada: " << endl;
      cout << "Título da tese: " << aux.titulo << endl;
      cout << "Autor da tese: " << aux.autor << endl;
      cout << "Ano de publicação da tese: " << aux.ano_de_publicacao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "Tese não encontrada. Verifique se foi digitado corretamente " << endl;
  }
  
  
}

void tese:: busca_autorTese() {
list <tese>:: iterator it;
  tese aux;
  string autor_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o título da tese a ser buscado: " << endl;
  cin >> autor_aux;

  for (it = teses.begin();it != teses.end();it++) {
    aux = *it;
    if(aux.autor == autor_aux) {
      cout << "Tese encontrada: " << endl;
      cout << "Título da tese: " << aux.titulo << endl;
      cout << "Autor da tese: " << aux.autor << endl;
      cout << "Ano de publicação da tese: " << aux.ano_de_publicacao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "Tese não encontrada. Verifique se foi digitado corretamente " << endl;
  }
    
}

void tese:: busca_anoTese() {
  list <tese>:: iterator it;
  tese aux;
  int ano_aux;
  int i=0;
  bool achou = true;

  cout << "Digite o ano da Tese a ser buscado: " << endl;
  cin >> ano_aux;

  for (it = teses.begin();it != teses.end();it++) {
    aux = *it;
    if(aux.ano_de_publicacao == ano_aux) {
      cout << "Tese encontrada: " << endl;
      cout << "Título da Tese: " << aux.titulo << endl;
      cout << "Autor da Tese: " << aux.autor << endl;
      cout << "Ano de publicação da Tese: " << aux.ano_de_publicacao << endl;
      achou = true;
    }
    i++;
  }
  if (!achou) {
    cout << "Tese não encontrada. Verifique se foi digitado corretamente " << endl;
  }
  
}

// E agora ?



  
