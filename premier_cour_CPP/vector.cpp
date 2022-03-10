#include <iostream>
#include <vector>
using namespace std;

int main() {

  // initializer list
  vector<int> vector1 = {1, 2, 3, 4, 5};

  // uniform initialization
  vector<int> vector2{6, 7, 8, 9, 10};

  // method 3
  vector<int> vector3(5, 12);

  //method4
  vector<int> vector4(15, 4);

  cout << "vector1 = ";

  // ranged loop
  for (const int& i : vector1) {
    cout << i << "  ";
  }

  cout << "\nvector2 = ";

  // ranged loop
  for (const int& i : vector2) {
    cout << i << "  ";
  }

  cout << "\nvector3 = ";

  // ranged loop
  for (int i : vector3) {
    cout << i << "  ";
  }

cout << "\nvector4 = ";
  //ranged loop vector 4
  for (int i : vector4) {
    cout << i << " ";
  }

  // add the integers 6 and 7 to the vector
  vector1.push_back(6);
  vector2.push_back(7);
  vector3.push_back(8);

  cout << "vector1 = ";

  // ranged loop
  for (const int& i : vector1) {
    cout << i << "  ";
  }

  cout << "\nvector2 = ";

  // ranged loop
  for (const int& i : vector2) {
    cout << i << "  ";
  }

  cout << "\nvector3 = ";

  // ranged loop
  for (int i : vector3) {
    cout << i << "  ";
  }

cout << "\nvector4 = ";
  //ranged loop vector 4
  for (int i : vector4) {
    cout << i << " ";
  }

  // affiche l'élément a la position vector1.at(i)
  cout <<"\n";
  cout << "Element at Index 0: " << vector1.at(0) << endl;
  cout << "Element at Index 2: " << vector2.at(2) << endl;
  cout << "Element at Index 4: " << vector3.at(4);


  



  return 0;
}