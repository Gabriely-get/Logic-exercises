#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 0;
    int insertedNum = 1;
    int numbers[10];
    
    while(insertedNum > 0 && i < 10) {
            
            cout << "Insira um valor: ";
            cin >> insertedNum;
            cout << endl;
            
            numbers[i] = insertedNum;
            i++;
    }
    
    for(int j = 0; j < i-1; j++) {
            int k = i+1;
            
            cout << "Numero: " << numbers[j] * -1 << endl;    
    }
    

    system("PAUSE");
    return EXIT_SUCCESS;
}

