# Game_Puzzle
É um projeto realizado pelo Centro Universitário do Pará em grupo com no máximo 3 pessoas onde o objetivo era fazer um jogo de Aventura/Puzzle

Este jogo foi desenvolvido pela dupla Douglas Gobitsch e Cássio Cavalcante

As Regras sâo:

 O jogador possui os seguintes comando:
 
W: O jogador movimenta uma unidade para cima;

A: O jogador movimenta uma unidade para esquerda;

S: O jogador movimenta uma unidade para baixo;

D: O jogador movimenta uma unidade para direita;

I: O jogador interage com o objeto que ele estar em cima.

     O jogo possui os seguintes elementos nas fases:
     
&: Simbolo que representa o jogador.

*: Simbolo que representa uma parede, o jogador ao se movimentar não pode passar pela parede.

@: Simbolo que representa a chave para abrir a porta para finalizar a fase, a porta abre no momento que o jogador interage com a chave.

D: Simbolo que representa a porta fechada.

=: Simbolo que representa a porta aberta quando o jogador interagiu com a chave.

O: Simbolo que representa um botão que o usuário pode interagir, o botão fica no chão e o jogador deve ficar em cima dele para poder interagir.

#: Simbolo que representa um espinho. A fase é reiniciada quando o jogador toca no espinho, caso a fase seja reiniciada três vezes, o jogo volta para o menu principal.

">": Simbolo que representa um teletransporte. O teletransporte sempre deve vir em par, quando o jogador toca em um ele é transportado para o outro e vice-versa.

     O jogo possui um total de 8 telas:
     
Menu Principal: Menu com com três escolhas para o usuário (Jogar, Tutorial, Sair);

Tutorial: Texto ensinando o jogador a jogar o jogo;

Sair: Texto de despedida e encerramento do programa;

Fase 1: A Fase 1 é inicializada quando o jogador seleciona a opção Jogar no Menu Principal;

Fase 2: A Fase 2 é inicializada quando o jogador termina a Fase 1;

Fase 3: A Fase 3 é inicializada quando o jogador termina a Fase 2;

Vitória: Texto elogiando o jogador por ter conseguido terminar o jogo, depois dessa tela o jogador volta para o Menu Principal. Essa tela só pode ser acessada se o jogador finalizar a Fase 3;

Derrota: Texto caçoando o jogador, depois dessa tela o jogador volta para o Menu Principal. Essa tela só pode ser acessada quando o jogador perde em uma fase.
     Cada fase deve possuir as seguintes características:
     
Fase 1: Essa fase possui uma dimensão de 25x25 e possui os seguintes elementos: jogador, parede, chave e porta;

Fase 2: Essa fase possui uma dimensão de 50x50 e possui os seguintes elementos: todos da Fase 1, botão e espinhos;

Fase 3: Essa fase possui uma dimensão de 75x75 e possui os seguintes elementos: todos da Fase 2 e teletransporte.
