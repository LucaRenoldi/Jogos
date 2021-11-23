#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	char palavraSecreta[20], letraDousuario[1], palavraNaoRevelada[20];
	int i, tamanho, chances, acertos;
	bool acerto = false;
	
	chances = 6;
	tamanho = 0;
	i = 0;
	acerto = false;
	acertos = 0;
	
	
	cout << "Digite a palavra secreta para as pessoas tentarem acertar: ";
	cin >> palavraSecreta;
	system("cls");
	
	while(palavraSecreta[i] != '\0'){
		i++;
		tamanho++;
	}
	
	for(i = 0; i < tamanho; i++){
		palavraNaoRevelada[i] = '-';
		
	}
	
	while((chances > 0) && (acertos < tamanho)){
		cout<< "Chances restantes: " << chances <<endl;
		cout << "Palavra secreta : ";
		
		for(i = 0; i < tamanho; i++){
			cout << palavraNaoRevelada[i];
		}
		
		cout << "\n\n Digite uma letra: ";
		cin >> letraDousuario[0];
		
		for(i = 0; i < tamanho; i++){
			if(palavraSecreta[i] == letraDousuario[0]){
				acerto = true;
				palavraNaoRevelada[i] = palavraSecreta [i];
				acertos++;
			}	
		}
		if(!acerto){
			chances--;
		}
 		acerto = false;
 		system("cls");
	}
	if(acertos == tamanho){
		cout << "Temos um vencedor!";
	} else{
			cout << "Nao foi dessa vez :(";
		}
		
		return 0;
	}

