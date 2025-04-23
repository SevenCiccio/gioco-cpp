#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct personaggio{
    string nome;
    int colore_pelle;
    string categoria;
    string razza;
}p1;

void menu();
void creazione_personaggio();
void scelta_nome_personaggio();
void scelta_colore_pelle_personaggio();
void crediti();

int main(){
    menu();
}

void menu(){
    int scelta_menu_principale;
    cout << "\nBenvenuto in (nome del gioco)\n";
    cout << "\n|-----------------------\n";
    cout << "\n|1. Nuova partita\n";
    cout << "\n|2. Crediti\n";
    cout << "\n|3. Esci dal gioco\n" ;
    cout << "\n|-----------------------";
    cout << "\n \n \nScegli in quale sezione andare --> ";
    cin >> scelta_menu_principale;
    cin.ignore();
    switch (scelta_menu_principale){
    case 1:
        creazione_personaggio();
        break;

    case 2:
        crediti();
        break;
    case 3:
        return;
        break;

    default:
        break;
    }
}

void creazione_personaggio(){
    scelta_nome_personaggio();
}
    
void scelta_nome_personaggio(){
    char conferma_nome_personaggio;
    cout << "Benvenuto nella creazione del tuo personaggio.\n";
    cout << "\nInserisci il nome del tuo personaggio: ";
    getline(cin, p1.nome);
    cout << "\nIl nome del tuo personaggio e' " << "'" << p1.nome << "'," << " vuoi davvero mantenere questo nome? y/n ";
    cin >> conferma_nome_personaggio;
    cin.ignore();
    while(tolower(conferma_nome_personaggio) == 'n'){
        cout << "Inserisci il nuovo nome del personaggio: ";
        getline(cin, p1.nome);
        cout << "vuoi davvero mantenere questo nome? y/n ";
        cin >> conferma_nome_personaggio;
        cin.ignore();
    }
    cout << "Scelta confermata, il nome del tuo personaggio e': " << p1.nome;
}

void scelta_colore_pelle_personaggio(){
    cout << "Scegli la tonalita' della pelle del tuo personaggio.";
}

void crediti(){
    cout << "Fondatori e sviluppatori di (nome gioco).\n";
    cout << "\nDavide Antonio Brefaro - 3G";
    cout << "\nDavide Scalise - 3G";
    menu();

}
