#include <bits/stdc++.h>

using namespace std;

void playGame();
void f();

int main()
{
    int a = 1;
    while(a==1)
    {
        system("cls");

      srand(time(NULL));
    char choice;
    cout << "\n          Welcome to guessing number Game!\n";
    cout << "\n     0. Quit\n     1. Play game\n" ;
    cout << "     Enter an option: ";
    cin >> choice;

    switch(choice)
    {
    case '0':
        cout << "     Quit the game!" << endl;
        a=2;
        break;

    case '1':
        playGame();
        cin.ignore();
        break;

    default:
        cout << "     You entered invalid number! Try again(press \"enter\") ";

        cin.ignore();
        cin.ignore();
        break;
    }

    }

    return 0;
}

void playGame()
{

    int random;
    string guess;
    random = 1 + rand() % 5;
    string newRandom = to_string(random);

    int b = 1;
    while(b == 1)
    {

     cout << "     Enter a random number between 1 and 5:";

     cin >> guess;

    if(guess == newRandom)
    {
        cout << "     ---------- Congrats! You won ----------";

        cin.ignore();
        cin.ignore();

        cout << "     3. Quit\n     4. Play again" << endl;

        while(b == 1)
        {
        char x;
        cout << "     Enter your choice: "; cin >> x;

        switch(x)
        {
        case '3':
            b = 2;
            break;

        case '4':
            playGame();
            break;

        default:
            cout << "     Invalid character! Try again" << endl;

        }
        }

    }

    else
        {
            cout << "     Try again!" << endl;
        }
    }
}
