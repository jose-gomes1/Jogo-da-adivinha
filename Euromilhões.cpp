#include <iostream>
#include <ctime>
#include <cstdlib>
using std::cout; using std::endl; using std::cin;

void assign(int[], int Size);
void draw(int, int[]);
bool check(int , int , int[]);
void printOut(int[], int);
void entry(int &);
 
int main()  {

    srand(time(nullptr));
    const int arraySize = 10;
    int user[arraySize];
    cout << "Vais ganhar os Euromilhões? Com tanta confiança, tenta a tua sorte" << endl;
    int wins[arraySize];
    int userInput;

    entry(userInput);
    assign(wins, arraySize);
    draw(arraySize, wins);
    check(userInput, arraySize, wins);
    printOut(wins, arraySize);
}
void assign(int wins[], int Size)   {
    for (int i = 0; i < Size; ++i)
     wins[i] = 0;
}
void draw(int arraySize, int wins[])    {
    int count = 0;
    while (count < arraySize)   {
        int number = rand() % 1000 + 1;
        if (!check(count, arraySize, wins))   {
            wins[count] =  number;
            count++;
        }
    }
}
bool check(int userInput, int count, int wins[]) {
    for (int i = 0; i < count; i++) {
        if (wins[i] == count)
            return true;
    }
    return false;
}
void entry(int &userInput)  {
    int i;
    cout << "Qual é o teu número: ";
    cin >> userInput;
    cout << "O teu número era " << userInput << endl;
}
void printOut(int wins[], int Size) {
    cout << "Os números vencedores são:" << endl;
    for (int i = 0; i < Size; ++i)  {
        cout << wins[i] << " ";
    }
}