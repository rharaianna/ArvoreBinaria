# ArvoreBinaria
-- Partes
* Nó: elemento com info
* Arco: liga 2 nós
* Pai: nó superior de um arco
* Filho: nó inferior de um arco
* Raiz: Não possui ancestrais (nó do topo)
* Folha: Nós das extremidades inferiores, não tem filhos

-- Números
* Grau de nó: número de subárvores de um nó
* Grau de árvore(aridade): grau maximo entre todos os nós da árvore
* Caminho: sequencia de arcos da raiz até um nó
* Comprimento: número de arcos do caminho
* Nível de nó: distância em arcos entre o nó e a raiz da árvore (nivel da raiz = 0)
* Altura de nó: distância em arcos entre o nó e seu descendente mais afastado (caminho mais longo)
* Altura de árvore: nível do nó folha que tem o caminho mais longo até a raiz
                  * Arvore vazia tem altura -1
                  * Árvore com 1 nó (que é raiz e folha simultaneamente) tem altura 0
                  * Se a árvore tem nível >1, ela tem pelo menos 1 folha e no máximo nivel-1 folhas  --??

--Limitação AB
* Tem no máximo 2 filhos (grau 2), filho da esquerda e filho da direita
* Uma árvore EXTRITAMENTE binária tem só 0 ou 2 filhos
* Uma árvore binária COMPLETA: todos os níveis, menos o último (tem a esquerda completa), estão cheios
* Uma árvore binária CHEIA: todos os níveis estão cheios
                          * Número de nós do nível i = 2^i

--Percurso em profundidade
  1. seguir tudo possível a direita/esquerda,
  2. mover para trás até a primeira encruzilhada,
  3. mover um passo a direita/esquerda,
  4. seguir novamente o quanto possível para a esquerda/direita
Usando uma pilha
  1. Criar pilha vazia
  2. Apontar ponteiro para raiz e percorrer a arvora para a esquerda empilhando até ele ser nulo
  3. o ponteiro recebe o valor do topo e desempilha
  4. ponteiro aponta para o proximo a direita

--Ordens
* Pré ordem -> visitar nó, percorrer a esquerda, percorrer a direita
* Ordem -> percorrer a esquerda, visitar nó, percorrer a direita
* Pós ordem ->  percorrer a esquerda, percorrer a direita, visitar nó

--Percurso em largura
* Visitar os nós por níveis, começando do mais alto(ou mais baixo) e movendo para baixo (ou para cima), visitando os nós de cada nível da esquerda para direita (ou direita para esquerda)
* Usando uma fila (cima p baixo, esquerda p direita)
  1. Raiz entra na fila;
  2. Nó do inicio da fila é visitado(sai da fila)
  3. Quando o nó é visitado seus filhos são colocados no final da fila


--Tipos de criação de árvores
* Inserção: Insere um nó filho, posição definida pelo usuário
* Montagem: monta arvore em profundidade











