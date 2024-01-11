#include <iostream>
#include <stack>

using namespace std;

main()
{

}

/*

1 - Se achar '(', continua empilhando, inclusive;
2 - Se a entrada tiver prioridade '>', continua empilhando;
3 - Se a entrada tiver prioridade '<' ou '=', desempilhe os operadores da pilha até encontrar um operador com menor prioridade ou até a pilha ficar vazia. Só então empilhe a entrada;
4 - Se achar ')', desempilha todos entre '(' e ')';
5 - Se a string terminar, desempilha todos.

OBS: A prioridade é do encontrado na string em relação ao topo da pilha

*/


