
#include "isbn.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main() {
  // Coloca o texto em portugûes

  setlocale(LC_ALL, "");

  // Cria os objetos e declara as variáveis

  int opcao, escolha1, escolha2, escolha_ord;
  obra obra1;
  livro livro1;
  artigo artigo1;
  TCC tcc1;
  tese tese1;

  while (4) {
    do {
      cout << "Selecione uma das opcoes abaixo:"
           << "\n1. Adicionar um exemplar"
           << "\n2. Consultar exemplar"
           << "\n3. Editar ou excluir exemplar"
           << "\n4. Exibir obras"
           << "\n5. Sair" << endl;

      cin >> opcao;
    } while (opcao < 0 || opcao > 5);
    switch (opcao) {
    case 1: // Adicionar obras
      cout << "Selecione o tipo de conteudo que deseja adicionar: "
           << "\n1. Livro"
           << "\n2. Artigo"
           << "\n3. TCC"
           << "\n4. Tese"
           << "\n5. Cancelar" << endl;
      cin >> escolha1;
      if (escolha1 == 1) {
        livro1.adicionarlivro();
      } else if (escolha1 == 2) {
        artigo1.adicionarartigo();
      } else if (escolha1 == 3) {
        tcc1.adicionartcc();
      } else if (escolha1 == 4) {
        tese1.adicionartese();
      };

      break;
    case 2:
      // inserir método de busca
      cout << "Selecione o tipo de conteudo que deseja buscar: "
           << "\n1. Livro"
           << "\n2. Artigo"
           << "\n3. TCC"
           << "\n4. Tese"
           << "\n5. Cancelar" << endl;
      cin >> escolha1;
      if (escolha1 == 1) {
        cout << "Selecione o tipo de filtro que deseja usar: "
             << "\n1. Titulo"
             << "\n2. Autor"
             << "\n3. Pais"
             << "\n4. Editora"
             << "\n5. Cancelar" << endl;
        cin >> escolha2;
        switch (escolha2) { // Case das formas de Ordenação
        case 1:
          livro1.busca_titulo();
          break;

        case 2:
          livro1.busca_autor();
          break;

        case 3:
          livro1.busca_pais();
          break;

        case 4:
          livro1.busca_editora();
          break;

        case 5:
          break;

        default:
          break;
        }
      } else if (escolha1 == 2) {
        cout << "Selecione o tipo de filtro que deseja usar: "
             << "\n1. Titulo"
             << "\n2. Autor"
             << "\n3. Ano de Publicacao"
             << "\n4. Cancelar" << endl;
        cin >> escolha2;
        switch (escolha2) { // Case das formas de Ordenação
        case 1:
          artigo1.busca_tituloArt();
          break;

        case 2:
          artigo1.busca_autorArt();
          break;

        case 3:
          artigo1.busca_anoArt();
          break;

        case 4:
          break;

        default:
          break;
        }
      } else if (escolha1 == 3) {
        cout << "Selecione o tipo de filtro que deseja usar: "
             << "\n1. Titulo"
             << "\n2. Autor"
             << "\n3. Ano de Publicacao"
             << "\n4. Cancelar" << endl;
        cin >> escolha2;
        switch (escolha2) { // Case das formas de Ordenação
        case 1:
          tcc1.busca_tituloTCC();
          break;

        case 2:
          tcc1.busca_autorTCC();
          break;

        case 3:
          tcc1.busca_anoTCC();
          break;

        case 4:
          break;

        default:
          break;
        }
      } else if (escolha1 == 4) {
        cout << "Selecione o tipo de filtro que deseja usar: "
             << "\n1. Titulo"
             << "\n2. Autor"
             << "\n3. Ano de Publicacao"
             << "\n4. Cancelar" << endl;
        cin >> escolha2;
        switch (escolha2) { // Case das formas de Ordenação
        case 1:
          tese1.busca_tituloTese();
          break;

        case 2:
          tese1.busca_autorTese();
          break;

        case 3:
          tese1.busca_anoTese();
          break;

        case 4:
          break;

        default:
          break;
        }
        }
        break;
      case 3:
        // inserir metodo de edicao e exclusao
        break;

      case 4: //→→→ 4 - Menu inical - Exibir
        cout << "Qual tipo de obra deseja exibir ? "
             << "\n1. Livro"
             << "\n2. Artigo"
             << "\n3. TCC"
             << "\n4. Tese"
             << "\n5. Cancelar" << endl;
        // ↑_→ 2º Menu dentro do Menu Inicial - Tipo de Obra
        cin >> escolha1;
        if (escolha1 == 1) { // 3º Menu - Após escolha do tipo - Ordenação
          cout << "Como deseja visualizar as obras?"
               << "\n1. Ordenada pelo título."
               << "\n2. Ordenada pelo autor."
               << "\n3. Ordenada pelo país de origem."
               << "\n4. Ordenada pela editora."
               << "\n5. Sair" << endl;
          cin >> escolha_ord;
          switch (escolha_ord) { // Case das formas de Ordenação
          case 1:
            livro1.ordenalivrostitulo();
            livro1.exibe();
            break;

          case 2:
            livro1.ordenalivrosautor();
            livro1.exibe();
            break;

          case 3:
            livro1.ordenalivrospais();
            livro1.exibe();
            break;

          case 4:
            livro1.ordenalivroseditora();
            livro1.exibe();
            break;

          case 5:
            break;

          default:
            break;
          }
          break;
        } else if (escolha1 == 2) { // escolha1 → *Artigo*
          cout << "Como deseja visualizar as obras?"
               << "\n1. Ordenada pelo título."
               << "\n2. Ordenada pelo autor."
               << "\n3. Ordenada pelo ano."
               << "\n4. Sair" << endl;
          cin >> escolha_ord; // Escolha de ordenação Artigos
          switch (escolha_ord) {
          case 1:
            artigo1.ordenaartigostitulo();
            artigo1.exibe();
            break;

          case 2:
            artigo1.ordenaartigosautor();
            artigo1.exibe();
            break;

          case 3:
            artigo1.ordenaartigosano();
            artigo1.exibe();
            break;

          case 4:
            break;

          default:
            break;
          }
        } else if (escolha1 == 3) { // escolha1 → TCC
          // Adicionar as ordenções
          cout << "Como deseja visualizar as obras?"
               << "\n1. Ordenada pelo título."
               << "\n2. Ordenada pelo autor."
               << "\n3. Ordenada pelo ano."
               << "\n4. Sair" << endl;
          cin >> escolha_ord; // Escolha de ordenação TCC
          switch (escolha_ord) {
          case 1:
            tcc1.ordenaTCC_titulo();
            tcc1.exibe();
            break;

          case 2:
            tcc1.ordenaTCC_autor();
            tcc1.exibe();
            break;

          case 3:
            tcc1.ordenaTCC_ano();
            tcc1.exibe();
            break;

          case 4:
            break;

          default:
            break;
          }
        } else if (escolha1 == 4) { // escolha1 → teses
          cout << "Como deseja visualizar as obras?"
               << "\n1. Ordenada pelo título."
               << "\n2. Ordenada pelo autor."
               << "\n3. Ordenada pelo ano."
               << "\n4. Sair" << endl;
          cin >> escolha_ord; // Escolha de ordenação tese
          switch (escolha_ord) {
          case 1:
            tese1.ordenatese_titulo();
            tese1.exibe();
            break;

          case 2:
            tese1.ordenatese_autor();
            tese1.exibe();
            break;

          case 3:
            tese1.ordenatese_ano();
            tese1.exibe();
            break;

          case 4:
            break;

          default:
            break;
          }
        };
        break;
      case 5: // Menu inicial → 4 → Exibir → escolha1 → 5 →
              // Menu incial de novo
        exit(5);
        break;
      }
      system("pause");
      system("cls");
    }
    return 0;
  }
