#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main ()
{
int maVariable = 12;
cout << &maVariable << endl;

int monTableau[3] = {23,7,12};
cout<< &monTableau << endl;
cout << monTableau << endl;
cout << *(monTableau) << endl;
cout << *(monTableau + 1) << endl;

}   