#include <iostream>
using namespace std;
#include <vector>
int cont = 0;
bool existe (vector<int> fila, int procurado){
    for(int i = 0; i < 8; i++){
        if (fila[i] == procurado)
        return true; 
    }
    return false;
}     
int main(){
vector<int> vetor{0, 1, 2, 3, 4, 5, 6, 7,};
cout << existe(vetor, 8);
} 