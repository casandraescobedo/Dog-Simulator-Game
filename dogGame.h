#include <iostream>
#include <string>
using namespace std;

int monthsLived;

string getDogName(){
  string dogName;
  cout << "Type in the name of your dog: " << endl;
  getline (cin, dogName);
  return dogName;
}

void endGame(){
  cout << "Thank you for playing! Good bye!\n";
}


void addmonths(int& m){
  m += 4;
  cout << "You have " << m << " months of life" << endl;
} 

// starting choice for the user
int adoptionOrStayWithMom(){
    cout << "Choose between the two options:\n 1. Stay with your Mom. \n 2. Get Adopted.\n";
      int adoptChoice;
      cin >> adoptChoice;

      if (adoptChoice == 1) {
        cout << "You chose to stay with your mom"<< endl;
          return adoptChoice;
      } 
      else if (adoptChoice == 2) {
        cout << "You chose to get adopted\n" << endl;
          return adoptChoice;
      } 
  return adoptChoice;
      }

// after choosing "Stay with mom"
int beByYourselfOrBeWithSiblings(){
  cout << "1. Play with the rest of the puppies\n2. Be by yourself\n";
  int beByYourselfChoice;
  cin >> beByYourselfChoice;

  if (beByYourselfChoice == 1){
    cout << "You chose to play with your siblings!\n"; 
    return beByYourselfChoice;
  }
    // dead end 
  else if (beByYourselfChoice == 2){
    cout << "OH NO! you chose to be by yourself, you died due to sadness. Try again!\n";
    return beByYourselfChoice;      
  }
  return beByYourselfChoice;
}
// after choosing "Play with Siblings"
int playWithSiblings(){
  cout << "You choose to stay with the other puppies.\nWhile you are playing with your siblings, you encounter some BERRIES, what do you want to do?\n 1. Eat the Berries\n 2. Ignore the Berries\n";
  int siblingsChoice;
  cin >> siblingsChoice;

  if (siblingsChoice == 1){
    cout << "You ate the berries\n OH NO! They were poisonous berries. Try again!\n";
    return siblingsChoice;
  }
  else if(siblingsChoice == 2){
    cout << "Good job! You ignore the poisonous berries!\n";
    return siblingsChoice;

  }
return siblingsChoice;
}

//after choosing "Ignore the Berries"
int ignoreTheBerries(){
  cout << "After you ignore the berries, you feel a little tired\nWhat do you want to do?\n1.Stay Awake\n2.Go to sleep\n";
  int ignoreMainChoice;
  cin >> ignoreMainChoice;

  if (ignoreMainChoice == 1){
    cout << "You chose to go to stay awake, you want to explore the forest.\n"; 
    return ignoreMainChoice;
  }
  else if (ignoreMainChoice == 2){
    cout << "You chose to go to sleep!\n A wolf ate you!\n Game over!\n " ;
    return ignoreMainChoice;
  }
  return ignoreMainChoice;

}

// after choosing to stay awake
int forestOption(){
  cout  << "1. Go to forest.\n2. Stay\n";
  int forestOptionChoice;
  cin >> forestOptionChoice;

  if (forestOptionChoice == 1){
    cout << "You chose to explore the forest.\nYou get eaten by a bear.\n";
    return forestOptionChoice;
  }
  else if(forestOptionChoice == 2){
    cout << "You decided to not go to the forest\n Good Dog!\n You lived happily ever after\n";
    return forestOptionChoice;
  }
  return forestOptionChoice;
}

// if user chooses to "Get Adopted"

//after choosing "Get Adopted"
int getAdoptedHandle(){
  cout << "1. Play with human inside.\n2. Go to the backyard\n";
  int playInsideOrBackyard;
  cin >> playInsideOrBackyard;

  if (playInsideOrBackyard == 1){
    cout << "You chose to play inside with your human!\n";
    return playInsideOrBackyard;
  }
  else if(playInsideOrBackyard == 2){
    cout << "You choose to go to the backyard!\n";
  return playInsideOrBackyard;
  }
  return playInsideOrBackyard;

}
// after choosing playing inside with owner
int attackHumanOrCry(){
  cout << "OH NO! By accident your human hurt your limb!.\n1. Attack human.\n2. Cry.\n";
  int attackHumanOrCryChoice;
  cin >> attackHumanOrCryChoice;

  if (attackHumanOrCryChoice == 1){
    cout << "You chose to attack your humam!\n Bad Dog!\n Try again!\n";
    return attackHumanOrCryChoice;
  }
  else if(attackHumanOrCryChoice == 2){
    cout << "Your human took you to the vet\n";
    return attackHumanOrCryChoice;
  }
  return attackHumanOrCryChoice;
}

//after choosing to go to backyard
int backYardSnake(){ 
  cout <<  "While in the backyard a snake appears, what do you want to do?\n1. Play with the snake.\n2. Ignore the snake.\n";
  int snakeChoice;
  cin >> snakeChoice;


  if(snakeChoice == 1){
    cout << "You chose to play with the snake! OH NO! The snake bit you.\nYou are dead.\nTry again!\n";
    return snakeChoice;

  }
  else if(snakeChoice == 2){
    cout << "Good job! You ignored the snake.\n You go back home! You live a long life, congrats!\n";
  return snakeChoice;
  }
  return snakeChoice;
}

// after choosing to cry
int humanGotYouToy(){
  int toyChoice;
  cout << "Your human got you a treat after your recovery... A TOY!\nWhat do you want to do?\n1. Be grateful\n2. Be mean\n";
  cin >> toyChoice;

    if(toyChoice == 1){
    cout << "You chose to be grateful towards your human! Good job\nYou choose to be happily ever after with your human.\n";
      return toyChoice;
    }
    else if(toyChoice == 2){
      cout << "Oh no! Your human was so mad.\n They left you alone.\n You die due to sadness.\n Bad dog, be nicer next time!\n Game Over!\n";
      return toyChoice;
    }
  return toyChoice;
}

int game(){
  
  monthsLived = 0;
  cout << "Welcome to the game Dog Simulator.\nYou will have to choose the right path in order to have a successful life as a dog.\nIf you don't, you will die and you will be asked if you want to restart the game.\n Good Luck!\n" ;
  string dogUserName = getDogName();
  addmonths(monthsLived);
  if(adoptionOrStayWithMom()==1)
  {
    if(beByYourselfOrBeWithSiblings()==1)
    {
      addmonths(monthsLived);
      if(playWithSiblings() == 1)
      {
        return 0;
      }
      else
      {
        addmonths(monthsLived);
        if(ignoreTheBerries() == 1)
        {
          addmonths(monthsLived);
          int x = forestOption();
          if(x == 1 || x == 2)
          {
            return 0;
          }
        }
        else
        {
          return 0;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  else {
    if(getAdoptedHandle() == 1)
    {
      if(attackHumanOrCry() == 1)
      {
        return 0;
      }
      else
        {
          
          int y = humanGotYouToy();
          if(y == 1 || y == 2)
            return 0;
        }
    }
    else
    {
      int z = backYardSnake();
      if(z == 1 || z == 2)
        return 0;
    }
  }
  return 0;
}