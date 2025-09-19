#include <iostream>
using namespace std;
#include "dogGame.h"

int main() {
int continueChoice = 1;
  while (continueChoice == 1)
  {
    game();
    cout << "You lived: " << monthsLived << " months\n";
    cout << "Do you want to play again?\n1.Yes\n2.No\n";
    cin >> continueChoice;
  }
  endGame();
}
