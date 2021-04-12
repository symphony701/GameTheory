
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Matriz.hpp"
using std::cout; using std::cin; using std::vector;

/*int asign_v(int min, int max) { return min + rand()%(max - min + 1); }
void read_restrict(int &f, int valor1, int valor2) { while(!(f == valor1 || f == valor2)) cin>>f; }*/

int main() {
  
 srand(time(0));

  Matriz mat1(3,3);
  mat1.mat_setArray();
  mat1.print();
  system("pause");
  return 0;

}