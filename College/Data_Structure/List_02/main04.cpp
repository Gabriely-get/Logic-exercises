#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int matriz[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    
    cout << "Matriz normal: \n\n";
    
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            cout << matriz[i][j] << "\t";
        }
        
        cout << endl;
    }
    
    cout << "Matriz de posicoes impares: \n\n";
    
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            if ((i+j)%2 != 0) {
               cout << matriz[i][j] << "\t";
            }
            
        }
        
        cout << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
