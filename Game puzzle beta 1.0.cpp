#include <iostream>

using namespace std;

void Movimentacao(char p);
void fase1();
void fase2();
void fase3();
void derrota();

int a, i, j, f, px, py, sx, sy, dx, dy, d2x, d2y, cx, cy, tx, ty, t2x, t2y, ex, ey, bx, by, w;
int u;
char opcao;
char personagem, p;
char matriz [100][100];

int main()
{	
	cout << "Game puzzle by Dg e Cassio" << "\n" << "             MENU" << "\n";
	cout << "Escolha uma opcao para continuar..." << "\n";
	cout << "1 - Jogar \n2 - Tutorial \n3 - Sair \n";
	cin >> opcao;
	switch(opcao)
	{
		case '1':
		fase1();
	
		u = 0;
	
		while(u < 3){
			fase2();
			system("cls");
			if(w == 0){
				derrota();
				system("cls");	
			}else{
				u = 3;
			}
		}
		if(w == 0){
			cout << "Fim de Jogo" << endl;
			system("pause");
			system("cls");
			main();
		}
	
		u = 0;
	
		while(u < 3){
			fase3();
			system("cls");
			if(w == 0){
				derrota();
				system("cls");
			}
			else{
				u = 3;	
			}
		}
		if(w == 0){
			cout << "Fim de Jogo" << endl;
			system("pause");
			system("cls");
			main();
		}else{
			cout << "Voce Ganhou! Parabens" << endl;
			system("pause");
			system("cls");
			main();
		}	
		break;
		case '2':
			system("cls");
			cout << "O jogo e do estilo aventura/puzzle onde o objetivo eh o jogador conseguir passar de tres fases.\nEm cada fase o jogador deve se movimentar para pegar uma chave para abrir a porta fechada.\n";
    	 	cout << "O jogador possui os seguintes comando:\n";
			cout << "W: O jogador movimenta uma unidade para cima\n";
			cout << "A: O jogador movimenta uma unidade para esquerda\n";
			cout << "S: O jogador movimenta uma unidade para baixo\n";
			cout << "D: O jogador movimenta uma unidade para direita\n";
			cout << "I: O jogador interage com o objeto que ele estar em cima.\n";
			cout << "     O jogo possui os seguintes elementos nas fases:\n";
			cout << "&: Simbolo que representa o jogador.\n";
			cout << "*: Simbolo que representa uma parede, o jogador ao se movimentar nao pode passar pela parede.\n";
			cout << "@: Simbolo que representa a chave para abrir a porta para finalizar a fase, a porta abre no momento que o jogador interage com a chave.\n";
			cout << "D: Simbolo que representa a porta fechada.\n";
			cout << "=: Simbolo que representa a porta aberta quando o jogador interagiu com a chave.\n";
			cout << "O: Simbolo que representa um botao que o usuario pode interagir, o botao fica no chao e o jogador deve ficar em cima \ndele para poder interagir.\n";
			cout << "#: Simbolo que representa um espinho. A fase e reiniciada quando o jogador toca no espinho, caso a fase seja reiniciada tres vezes, o jogo volta para o menu principal.\n";
			cout << ">: Simbolo que representa um teletransporte. O teletransporte sempre deve vir em par, quando o jogador toca em um ele e transportado para o outro e vice-versa.\n";
			system ("pause");
			system ("cls");
			main();
		break;	
		case '3':
			system("cls");
			cout << "Por hoje e tudo pe pe pessoal" << "\n";
			system("exit");
		break;
		default:
			cout << "Desculpe comando invalido.";
			
		break;	
	}
	
	return 0;
}

void Movimentacao(char p)
{	
	sx = px;
	sy = py;
	switch (p)
	{
		case 'w':
		case 'W': 
			if(matriz[px - 1][py] == '*' ||  matriz[px - 1][py] == 'D'){
	    		px = px;
			}else if(matriz[px - 1][py] == '#'){
				a = -1;
				w = 0;				
			}
			else if(matriz[px - 1][py] == '='){
				a = -1;
				w = 1;
			}
			else if(px - 1 == tx && py == ty )
			{
				matriz[sx][sy] = ' ';
				px = t2x;
				py = t2y;
			}
			else if(px - 1 == t2x && py == t2y)
			{
				matriz[sx][sy] = ' ';
				px = tx;
				py = ty;
			}
			else{
				px = px - 1;
				matriz[sx][sy] = ' ';
			}
	    	break;
		case 'a':
		case 'A':
	    	if(matriz[px][py - 1] == '*' || matriz[px][py - 1] == 'D'){
	    		py = py;
			}else if(matriz[px][py - 1] == '#'){
				a = -1;
				w = 0;
			}
			else if(matriz[px][py - 1] == '='){
				a = -1;
				w = 1;
			}
			else if(px == tx && py - 1 == ty )
			{
				matriz[sx][sy] = ' ';
				px = t2x;
				py = t2y;
			}
			else if(px == t2x && py - 1 == t2y)
			{
				matriz[sx][sy] = ' ';
				px = tx;
				py = ty;
			}
			else{
				py = py - 1;
			
				matriz[sx][sy] = ' ';
			}
	    	break;
		case 'd':
		case 'D': 
			if(matriz[px][py + 1] == '*' ||  matriz[px][py + 1] == 'D'){
	    		py = py;
			}else if(matriz[px][py + 1] == '#'){
				a = -1;
				w = 0;
			}
			else if(matriz[px][py + 1] == '='){
				a = -1;
				w = 1;
			}
			else if(px == tx && py + 1 == ty)
			{
				matriz[sx][sy] = ' ';
				px = t2x;
				py = t2y;
			}
			else if(px == t2x && py + 1 == t2y)
			{
				matriz[sx][sy] = ' ';
				px = tx;
				py = ty;
			}
			else{
				py = py + 1;
				
				matriz[sx][sy] = ' ';
			}
	    	break;
		case 's':
		case 'S':
	    	if(matriz[px + 1][py] == '*' || matriz[px + 1][py] == 'D'){
	    		px = px;
			}else if(matriz[px + 1][py] == '#'){
				a = -1;
				w = 0;
			}else if(matriz[px + 1][py] == '='){
				a = -1;
				w = 1;
				u = 4;
			}
			else if(px + 1 == tx && py == ty )
			{
				matriz[sx][sy] = ' ';
				px = t2x;
				py = t2y;
			}
			else if(px + 1 == t2x && py == t2y)
			{
				matriz[sx][sy] = ' ';
				px = tx;
				py = ty;
			}
			else{
				px = px + 1;
					
				matriz[sx][sy] = ' ';
			}
	    	break;
	    
	    case 'i':
	    case 'I':
	    	if(px == cx && py == cy){
	    		matriz[dx][dy] = '=';
	    		matriz[cx][cy] = ' ';
			}else if(px == bx && py == by){
				matriz[d2x][d2y] = ' ';
				matriz[ex][ey] = '#';
			}
			else{
				matriz[px][py] = matriz[px][py];
			}
			break;
	    default:
	    	matriz[px][py] = matriz[px][py];
			break;
	}
}

void fase1(){
	px = 23;
	py = 12;
	dx = 12;
	dy = 24;
	cx = 12;
	cy = 5;
	f = 1;
	
	//bordas
	for(i = 0; i < 25; i++)
	{
		matriz[0][i] = '*';		
	}
	for(i = 0; i < 25; i++)
	{
		matriz[i][0] = '*';
	}
	for(i = 0; i < 25; i++)
	{
		matriz[24][i] = '*';
	}
	for (i = 0; i < 25; i++)
	{
		matriz[i][24] = '*';
	}
//preenchimento
	for(i = 1; i < 24; i++)
	{
		for(j = 1; j < 24; j++)
		{
			matriz[i][j] = ' ';
		}
	}
	
	for(i = 1; i < 8; i++){
		matriz[i][7] = '*';
		matriz[7][i] = '*';
		matriz[i][16] = '*';
		matriz[16][i] = '*';
	}
	
	for(i = 16; i < 24; i++){
		matriz[7][i] = '*';
		matriz[i][7] = '*';
		matriz[16][i] = '*';
		matriz[i][16] = '*';
	}
	
	matriz[dx][dy] = 'D';	
	
	for(a = 1; a > 0 ; a++){
		system("cls");
		if(matriz[dx][dy] == 'D'){
			matriz[cx][cy] = '@';
		}
		matriz[px][py] = '&';
		
		for(i = 0; i < 25; i++)
		{
			for(j = 0; j < 25; j++)
			{
				cout << matriz[i][j] << " ";
			}
			cout << "\n";
		}
 
		cin >> p;
		Movimentacao(p);
	}
	
}

void derrota(){
	
	if(f == 2)
	{
		system("cls");
		cout << "CPF Cancelado" << endl;
		system("pause");
		system("cls");
	}
	else if(f == 3)
	{
		system("cls");
		cout << "CPF Cancelado" << endl;
		system("pause");
		system("cls");
	}
}



void fase2(){
	px = 24;
	py = 1;
	dx = 49;
	dy = 16;
	d2x = 24;
	d2y = 14;
	cx = 9;
	cy = 13;
	ex = 9;
	ey = 14;
	bx = 11;
	by = 13;
	f = 2;
	
	//bordas
	for(i = 0; i < 50; i++)
	{
		matriz[0][i] = '*';		
	}
	for(i = 0; i < 50; i++)
	{
		matriz[i][0] = '*';
	}
	for(i = 0; i < 50; i++)
	{
		matriz[49][i] = '*';
	}
	for (i = 0; i < 50; i++)
	{
		matriz[i][49] = '*';
	}
//preenchimento
	for(i = 1; i < 49; i++)
	{
		for(j = 1; j < 49; j++)
		{
			matriz[i][j] = ' ';
		}
	}
	
	for(i = 0; i < 15; i++){
		matriz[10][i] = '*';
		matriz[38][i] = '*';
	}
	
	for(i = 10; i < 39; i++){
		matriz[i][14] = '*';
	}
	
	matriz[d2x][d2y] = 'D';
	matriz[dx][dy] = 'D';
	matriz[ex][ey] = ' ';	
	
	for(a = 1;a > 0;a++){
		system("cls");
		if(matriz[ex][ey] == ' '){
			matriz[bx][by] = 'O';
		}
		if(matriz[dx][dy] == 'D'){
			matriz[cx][cy] = '@';
		}
		matriz[px][py] = '&';
		
		for(i = 0; i < 50; i++)
		{
			for(j = 0; j < 50; j++)
			{
				cout << matriz[i][j] << " ";
			}
			cout << "\n";
		}
 
		cin >> p;
		Movimentacao(p);
	}
	
	u = u + 1;
}



void fase3()
{
	px = 1;
	py = 12;
	dx = 38;
	dy = 74;
	d2x = 25;
	d2y = 12;
	cx = 26;
	cy = 25;
	ex = 24;
	ey = 11;
	f = 3;
	bx = 35;
	by = 70;
	tx = 12;
	ty = 12;
	t2x = 38;
	t2y = 68;
	
	//bordas
	for(i = 0; i < 75; i++)
	{
		matriz[0][i] = '*';		
	}
	for(i = 0; i < 75; i++)
	{
		matriz[i][0] = '*';
	}
	for(i = 0; i < 75; i++)
	{
		matriz[74][i] = '*';
	}
	for (i = 0; i < 75; i++)
	{
		matriz[i][74] = '*';
	}
//preenchimento
	for(i = 1; i < 74; i++)
	{
		for(j = 1; j < 74; j++)
		{
			matriz[i][j] = ' ';
		}
	}
	
	for(i = 0; i < 26; i++){
		matriz[i][25] = '*';
		matriz[25][i] = '*';
		matriz[50][i] = '*';
	}
	
	for(i = 50; i < 75; i++){
		matriz[i][25] = '*';
	}
	
	for(i = 0; i < 75; i++){
		matriz[i][50] = '*';
	}
	
	
	matriz[d2x][d2y] = 'D';
	matriz[bx][by] = 'O';
	matriz[ex][ey] = ' ';
	matriz[dx][dy] = 'D';	
	
	for(a = 1;a > 0;a++){
		system("cls");
		
		matriz[t2x][t2y] = '>';
		matriz[tx][ty] = '>';
		if(matriz[ex][ey] == ' '){
			matriz[bx][by] = 'O';
		}
		if(matriz[dx][dy] == 'D'){
			matriz[cx][cy] = '@';
		}
		matriz[px][py] = '&';
		
		for(i = 0; i < 75; i++)
		{
			for(j = 0; j < 75; j++)
			{
				cout << matriz[i][j] << " ";
			}
			cout << "\n";
		}
 
		cin >> p;
		Movimentacao(p);
	}
	
	u = u + 1;
}
