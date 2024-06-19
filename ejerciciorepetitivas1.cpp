#include <iostream>

using namespace std;

int main() {
	cout<<"*--------El programa se ha iniciado-------*";
	cout<<"Se ha iniciado el programa correctamente"<<endl;
	
    int n;
    
    cout<<"Ingrese el valor de n: "; //n es el numero de multiplos que se imprimiran de 7
    cin>>n;
    
    for (int i = 1; i <= n; i++) {
        cout << i * 7 << endl;
    }
    cout<<"*---------El programa ha finalizado---------*";
    return 0;
}

