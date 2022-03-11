#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int matriz[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}, sum = 0;
    
    for (int i=0; i < 4; i++) {
        sum = sum + matriz[i][i];
    }
    
    cout << "Soma das diagonais da matriz: " << sum << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
