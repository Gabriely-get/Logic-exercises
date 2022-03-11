#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int matriz[2][3] = {1,2,3,4,5,6};
    
    cout << "Nao transposta: \n \n";
    
    for (int i=0;i<2;i++) {
        for (int j=0;j<3;j++) {
            cout << matriz[i][j] << "\t";
        }
        
        cout << endl;
    }
    
    cout << "\n \n Transposta: \n \n";
    
    for (int j=0;j<3;j++) {
        for (int i=0;i<2;i++) {
            cout << matriz[i][j] << "\t";
        }
        
        cout << endl;
    } 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
