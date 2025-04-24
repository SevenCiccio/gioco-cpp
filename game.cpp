#include <iostream>
#include <cmath>
#include <windows.h>
#include <string>

using namespace std;

struct personaggio
{
    string nome;
    string colore_pelle;
    string categoria;
    string razza;
} p1;

void pulire()
{
    system("cls");
}
void menu();
void creazione_personaggio();
void scelta_nome_personaggio();
void scelta_colore_pelle_personaggio();
void scelta_classe_personaggio();
void scelta_razza_personaggio();
void crediti();
void colorText(int color);

int main()
{
    menu();
}

void menu()
{
    int scelta_menu_principale;
    cout << "|-----------------------------------|" << endl;
    cout << "|   Benvenuto in (nome del gioco)   |" << endl;
    cout << "|-----------------------------------|" << endl;
    cout << endl;
    cout << "|-----------------------|" << endl;
    cout << "| 1. Nuova partita      |" << endl;
    cout << "|                       |" << endl;
    cout << "| 2. Crediti            |" << endl;
    cout << "|                       |" << endl;
    cout << "| 3. Esci dal gioco     |" << endl;
    cout << "|-----------------------|" << endl;
    cout << "Scegli in quale sezione andare --> ";
    cin >> scelta_menu_principale;
    cin.ignore();
    switch (scelta_menu_principale)
    {
    case 1:
        pulire();
        creazione_personaggio();
        break;

    case 2:
        pulire();
        crediti();
        break;
    case 3:
        return;
        break;
    }
}

void creazione_personaggio()
{
    scelta_nome_personaggio();
}

void scelta_nome_personaggio()
{
    char colore_pelle;
    char conferma_nome_personaggio;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| Benvenuto nella creazione del tuo personaggio |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << endl;
    do
    {
        cout << "| Inserisci il nome del tuo personaggio: ";
        getline(cin, p1.nome);
    } while (p1.nome == "" or p1.nome == " ");

    cout << "\nIl nome del tuo personaggio e' " << "| " << p1.nome << " |" << endl
         << "vuoi davvero mantenere questo nome? y/n :";
    cin >> conferma_nome_personaggio;
    cin.ignore();

    while (tolower(conferma_nome_personaggio) == 'n')
    {
        cout << "Inserisci il nuovo nome del personaggio: ";
        getline(cin, p1.nome);
        cout << "vuoi davvero mantenere questo nome? y/n: ";
        cin >> conferma_nome_personaggio;
        cin.ignore();
    }

    cout << "\nScelta confermata, il nome del tuo personaggio e': " << p1.nome;
    cout << "\nVuoi passare alla scelta della pelle? (y/n) : ";
    cin >> colore_pelle;
    if (tolower(colore_pelle) == 'y')
    {
        pulire();
        scelta_colore_pelle_personaggio();
    }
    else
    {
        pulire();
        menu();
    }
}

void scelta_colore_pelle_personaggio()
{
    char classe_step_successivo;
    int scelta_colore_pelle;
    char conferma_colore_pelle;
    do
    {
        pulire();
        cout << "|---------------------------------------------------------|" << endl;
        cout << "|  Scegli la tonalita' della pelle del tuo personaggio.   |" << endl;
        cout << "|---------------------------------------------------------|" << endl;
        cout << endl;
        cout << "|-----------------------|" << endl;
        cout << "| 1. Bianco             |" << endl;
        cout << "|                       |" << endl;
        colorText(9);
        cout << "| 2. Blu chiaro         |" << endl;
        colorText(7);
        cout << "|                       |" << endl;
        colorText(4);
        cout << "| 3. Rosso              |" << endl;
        colorText(7);
        cout << "|                       |" << endl;
        colorText(2);
        cout << "| 4. Verde              |" << endl;
        colorText(7);
        cout << "|-----------------------|" << endl;
        cout << "inserire scelta: ";
        cin >> scelta_colore_pelle;
        switch (scelta_colore_pelle)
        {
        case 1:
            p1.colore_pelle = "Bianco";
            break;

        case 2:
            p1.colore_pelle = "Blu chiaro";
            break;

        case 3:
            p1.colore_pelle = "Rosso";
            break;

        case 4:
            p1.colore_pelle = "Verde";
            break;
        }
        cout << "Hai scelto la tonalita' della pelle " << p1.colore_pelle << ", confermi la scelta? y/n: ";
        cin >> conferma_colore_pelle;
        cin.ignore();
    } while (tolower(conferma_colore_pelle) == 'n');

    if (p1.colore_pelle == "Bianco")
    {
        cout << "\nscelta confermata, la tonalita' della pelle e': ";
        colorText(7);
        cout << p1.colore_pelle;
        colorText(7);
    }
    else if (p1.colore_pelle == "Blu chiaro")
    {
        cout << "\nscelta confermata, la tonalita' della pelle e': ";
        colorText(9);
        cout << p1.colore_pelle;
        colorText(7);
    }
    else if (p1.colore_pelle == "Rosso")
    {
        cout << "\nscelta confermata, la tonalita' della pelle e': ";
        colorText(4);
        cout << p1.colore_pelle;
        colorText(7);
    }
    else if (p1.colore_pelle == "Verde")
    {
        cout << "\nscelta confermata, la tonalita' della pelle e': ";
        colorText(2);
        cout << p1.colore_pelle;
        colorText(7);
    }

    cout << "\nVuoi passare alla scelta della classe? (y/n) : ";
    cin >> classe_step_successivo;
    if (tolower(classe_step_successivo) == 'y')
    {
        pulire();
        scelta_classe_personaggio();
    }
    else
    {
        pulire();
        menu();
    }
}

void scelta_classe_personaggio()
{
    char razza_step_successivo;
    int scelta_classe;
    char conferma_scelta_classe;
    do
    {
        pulire();
        cout << "|---------------------------------------------------------|" << endl;
        cout << "|  Scegli la classe del tuo personaggio.                  |" << endl;
        cout << "|---------------------------------------------------------|" << endl;
        cout << endl;
        cout << "|-----------------------|" << endl;
        cout << "| 1. Guerriero          |" << endl;
        cout << "|                       |" << endl;
        cout << "| 2. Assassino          |" << endl;
        cout << "|                       |" << endl;
        cout << "| 3. Tank               |" << endl;
        cout << "|                       |" << endl;
        cout << "| 4. Mago               |" << endl;
        cout << "|-----------------------|" << endl;
        cout << "inserire scelta: ";
        cin >> scelta_classe;
        switch (scelta_classe)
        {
        case 1:
            p1.categoria = "Guerriero";
            break;

        case 2:
            p1.categoria = "Assassino";
            break;

        case 3:
            p1.categoria = "Tank";
            break;

        case 4:
            p1.categoria = "Mago";
            break;
        }
        cout << "Hai scelto la classe del " << p1.categoria << ", confermi la scelta? y/n: ";
        cin >> conferma_scelta_classe;
        cin.ignore();
    } while (tolower(conferma_scelta_classe) == 'n');

    cout << "\nscelta confermata, la classe del personaggio e': " << p1.categoria;
    cout << "\nVuoi passare alla scelta della razza? (y/n) : ";
    cin >> razza_step_successivo;
    if (tolower(razza_step_successivo) == 'y')
    {
        pulire();
        scelta_razza_personaggio();
    }
    else
    {
        pulire();
        menu();
    }
}

void scelta_razza_personaggio()
{
    char conferma_razza;
    int scelta_razza;
    do
    {
        pulire();
        cout << "|---------------------------------------------------------|" << endl;
        cout << "|           Scegli la razza del tuo personaggio           |" << endl;
        cout << "|---------------------------------------------------------|" << endl;
        cout << endl;
        cout << "|-----------------------|" << endl;
        cout << "| 1. Umano              |" << endl;
        cout << "|                       |" << endl;
        cout << "| 2. Demone             |" << endl;
        cout << "|                       |" << endl;
        cout << "| 3. Ibrido             |" << endl;
        cout << "|                       |" << endl;
        cout << "| 4. Elfo               |" << endl;
        cout << "|-----------------------|" << endl;
        cout << "Inserire la scelta: ";
        cin >> scelta_razza;
        switch (scelta_razza)
        {
        case 1:
            p1.razza = "Umano";
            break;

        case 2:
            p1.razza = "Demone";
            break;

        case 3:
            p1.razza = "Ibrido";
            break;

        case 4:
            p1.razza = "Elfo";
            break;
        }
        cout << "Hai scelto la razza del personaggio: " << p1.razza << ", confermi la scelta? y/n: ";
        cin >> conferma_razza;
        cin.ignore();
    } while (tolower(conferma_razza) == 'n');
    cout << "\nscelta confermata, la razza del personaggio e': " << p1.razza;
}

void crediti()
{
    cout << "Fondatori e sviluppatori di (nome gioco).\n";
    cout << "\nDavide Antonio Brefaro - 3G";
    cout << "\nDavide Scalise - 3G";
    menu();
}

void colorText(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

/*
0	Nero
1	Blu
2	Verde
3	Aqua
4	Rosso
5	Viola
6	Giallo
7	Bianco
8	Grigio
9	Blu chiaro
a	Verde chiaro
b	Azzurro
c	Rosso chiaro
d	Viola chiaro
e	Giallo chiaro
f	Bianco brillante
*/
