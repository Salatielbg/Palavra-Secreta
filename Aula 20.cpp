#include <iostream>
#include <cstring>
#include <string>
#include <unistd.h>
using namespace std;

int main(){
    char palavra[30], letra, secreta[30];
    int tam,i,chances,acertos;
    bool acerto;


    tam=0;
    i=0;
    acerto=false;
    acertos=0;
    chances=5;

    cout << "\n\tJogo da Forca\n";
    cout << "Digite a palavra secreta:" << "\n";
    cin.getline(palavra,30);
    system("cls");

    tam=strlen(palavra);



    do{
        cout << "\n\tJogo da Forca\n";
        cout <<"\t\t\tTentativas:" << chances << "\n\n";

        for(i=0; i<tam;i++){
            cout << secreta[i] << "-";
        }

        cout << "\nDigite uma letra:";
        cin >> letra;





        acerto = false;
        for(i=0; i<tam; i++){
            if(tolower(palavra[i]) == letra){
                secreta[i] = letra;
                acerto = true;
            }
        }

        if (!acerto) {
            chances--;
            cout << "Letra errada, Tente novamente!";
            sleep(2);
        }

        system("cls");
    } while (chances > 0 && strcmp(palavra, secreta) != 0);

    if (strcmp(palavra, secreta) == 0) {
        cout <<"\nAcertou Miseravi! A palavra correta era: " << palavra << "/n";
    } else {
        cout << "\nMuito burro! A palavra correta era: " << palavra << "/n";
    }



  return 0;
}
