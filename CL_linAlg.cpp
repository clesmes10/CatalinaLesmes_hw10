#inlcude <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//inicializacion de las matrices
double get_matrix(int N, int M);
int matrix_product(int N, int M);

double get_matrix(int N, int M){

}
//funcion main para multiplicacion de matrices
int main(){
  double*a= new double[10];
  double**mat= new double*[4];
  int i;
  int j;
  for(i=0; i<4; i++){
    mat[i] = new double[5];
  }
  for(i=0; j<4; i++){
    for(j=0; j<5; j++){
      mat[i][j] =i*j;
      cout << mat[i][j] << " " ;
    }
    cout<< endl;
  }
  cout << "Ingresar numero" << endl;
  double var;
  cin >> var;
  cout << "El doble del numero es: " << 2*var << endl;
  return 0;
}

  
