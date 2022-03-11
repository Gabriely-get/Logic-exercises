#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 0;
    int isEqual = 0;
    int numbers[100];
    int lastNumber = 0;
    int actualNumber = 0;
    
    while(i < 100) {
            int insertedNum;
            
            cout << "Insira um valor: ";
            cin >> insertedNum;
            
            if (insertedNum == 0) {
               break;                 
            }
            
            numbers[i] = insertedNum;
            i++;
    }
    
    for(int j = 0; j < i; j++) {
        lastNumber = numbers[i-1];
        actualNumber = numbers[j];
        
        if(lastNumber == actualNumber) {
           isEqual++;              
        }
    }
    
    cout << "\n Ha " << isEqual << " numeros " << lastNumber << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
