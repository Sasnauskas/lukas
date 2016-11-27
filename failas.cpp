#include <iostream>

using namespace std;

int main() {

  int amzius;
  
  cout << "Sveiki!" << endl;
  
  cout << "Iveskite savo amziu: ";
  cin >> amzius;
  
  if(amzius >= 18) {
      cout << "Jus tinkamas siam projektui" << endl; 
  } else {
    cout << "Jusu amzius neatitinka reikalavimu" << endl;
  }

  return 0;
}
