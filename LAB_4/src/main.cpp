#include "../include/lab4/macierz.h"
#include "../libs/libs.h"

int main() {
  srand(time(NULL));

  Macierz m2(4, 5);

  for (int i = 0; i < m2.getRows(); i++) {
    for (int j = 0; j < m2.getColumns(); j++) {
      m2.set(i, j, rand() % 10);
    }
  }

  m2.set(1, 1, 5);
  cout << m2.get(1, 1);


  Macierz m3(4, 5);

  for (int i = 0; i < m3.getRows(); i++) {
    for (int j = 0; j < m3.getColumns(); j++) {
      m3.set(i, j, rand() % 10);
    }
  }

  Macierz m4(5, 6);

  for (int i = 0; i < m4.getRows(); i++) {
    for (int j = 0; j < m4.getColumns(); j++) {
      m4.set(i, j, rand() % 10);
    }
  }

  Macierz m5(5);

  for (int i = 0; i < m5.getRows(); i++) {
    for (int j = 0; j < m5.getColumns(); j++) {
      m5.set(i, j, rand() % 10);
    }
  }
  cout << endl << "Macierz m2: " << endl;
  m2.print();
  cout << endl << "Macierz m3: " << endl;
  m3.print();
  cout << endl << "Macierz m4: " << endl;
  m4.print();
  cout << endl << "Macierz m5: " << endl;
  m5.print();

  cout << endl << "Dodawanie macierzy: " << endl;
  Macierz matrixToAdd(4, 5);
  matrixToAdd = m2.add(m3);
  matrixToAdd.print();

  cout << endl << "Odejmowanie macierzy: " << endl;
  Macierz matrixToSubstract(4, 5);
  matrixToSubstract = m3.substract(m2);
  matrixToSubstract.print();

  cout << endl << "Mnozenie macierzy: " << endl;
  Macierz matrixToMultiply(6, 4);
  matrixToMultiply = m3.multiply(m4);
  matrixToMultiply.print();

  m5.store("matrix.txt", "../"); // Zapisanie macierzy do pliku

  cout << endl << "Macierz z pliku: " << endl;
  Macierz matrixFromFile("macierz.txt", "../");

  matrixFromFile.print();
}