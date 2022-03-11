#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 0;
    int l = 0;
    int numbers[10];
    int newNumber = 0;
    int insertedNum = 0;
    
    while(i < 10) {
            cout << "Insira um valor: ";
            cin >> insertedNum;
            numbers[i]=insertedNum;
            if (i > 1) {
               for(int j = 0; j < i; j++) {
                       if (numbers[j] == insertedNum) {
                          cout << "Os valores nao podem se repetir! Insira um novo: ";
                          i--;
                       }
               }
            }
            
           
            i++;     
            
            
    }
    
    while(l < 10) {
            cout << numbers[l];
            l++;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
