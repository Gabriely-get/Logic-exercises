#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int matrizA[3][5], sum_line[3], sum = 0;
    
    for (int i=0; i<3 i++) {
        for (int j=0; j<5; j++) {
            cout << "Insira um valor: ";
            cin >> matrizA[i][j];
            
            sum += matrizA[i][j];
        }
        
        sum_line[i] = sum;
        sum = 0;
    }
    
    for (int i=0; i<3; i++) {
            cout << "Valor da linha " << i+1 << ": " << sum_line[i];
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
