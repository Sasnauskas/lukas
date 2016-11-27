#include <iostream>

using namespace std;

int main() {
  
  int amzius;
  
  cout << "Sveiki!" << endl;

  cout << "Iveskite savo amziu: ";
  cin >> amzius;
  
  if(amzius >= 18) {
      cout << "Jus atitinkate reikalavimus!" << endl; 
  } else {
      cout << "Jusu amzius per mazas, kad atitiktu reikalavimus! " << endl;
  }
  
  return 0;
}
