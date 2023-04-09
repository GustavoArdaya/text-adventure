#include <iostream>


int main() {

  bool alive = true;
  bool hasKey = false;
  bool screamForHelp = false;
  int wellness = 0;

  std::cout << "You open your eyes and you find yourself in an empty, dirty room. You can't remember how or when you got there. You look around, trying to make sense of your surroundings.";

  while (true) {
    int choice;
    bool exit = false;
    

    std::cout << "Inside the room you see a closed door, a barred window and a table with a bottle with some liquid in it. There are some old newspapers on the floor but nothing else around that looks helpful. Your head is still spinning a bit and your throat hurts. You're very thirsty.\n\n";
    std::cout << "\t1. Try to open the door\n";
    std::cout << "\t2. Look out the window\n";
    std::cout << "\t3. Drink from the bottle on the table\n";
    std::cout << "\t4. Look at the newspapers on the floor\n";

    std::cin >> choice;

    switch (choice) {
      case 1: {
        if (hasKey == false) {
          std::cout << "You try to open the door, but no matter how hard you try it wont budge. It's locked.\nYou get more nervous and reconsider your options.\n\n";
          break;
        } else {
          std::cout << "You introduce the key you found under the newspapers and... Surprise! it unlocks the door. You are free to leave the room!\n";
          exit = true;
        }
        break;
      }
      case 2: {
        int scream;
        std::cout << "You look out the window. It's the middle of the night. You can see you're in the second floor of an old house in the middle of a thick forest.\n\n";
        std::cout << "\t 1) Scream for help\n";
        std::cout << "\t 2) Do nothing and step away from the window\n";
        std::cin >> scream;
        if (scream == 1) { 
          std::cout << "You scream your lungs out for help, but no one answers. You begin to worry that you might draw the unwanted attention of someone (or something) dangerous. You go back and reconsider your options.\n\n";
          screamForHelp = true;
          break;
        } else if (scream == 2) {
          std::cout << "You step away from the window, with a deep sense of dispair.\n\n";
          break;
        }
        break;
      }
      case 3: {
        std::cout << "The liquid inside the bottle looks a little odd but you don't care.\nYou take a sip. It's a little bitter... but you're so thirsty!\nYou continue gulping the content and when you finish you feel your thirst is somewhat diminished.\nSuddenly your head starts spinning again and your stomach is violently churning! You feel terrible!\nYou collapse onto the floor, foaming from the mouth. After a few minutes you stop kicking... It's over for you. You die without even knowing what happened to you.\n\n";
        alive = false;
        exit = true;
        break;
      }
      case 4: {
        std::cout << "Not sure why or with what purpose you search through the newspapers on the floor. Perhaps there's a clue written in them. A date, or a place to orient yourself.\nYou pick one of them and suddenly to see a key on the floor. Could this be the door's key?.\n\n";
        hasKey = true;
        break;
      }
      default: std::cout << "invalid input. Try again.\n\n";
    }
    if (exit == true) break;
  }
  if (alive == false) {
    std::cout << "Game Over!\n";
    exit(0);
  }
  std::cout << "At last you escape the room and find yourself going down the stairs into a big room decorated with animal trophies. There's a tense silence only broken with the howling sound of the wind entering through a broken window.";
  std::cout << "No one seems to be around, but you still try to make as little noise as posible.\n";

  while (true) {
    int choice;
    bool jumpScare = false;

    std::cout << "In this hall you see dusty old furniture, some covered with cloth. There's a big chimney with the head of a deer leering at you on top of it.\nTo the right you see the door of what seems to be the kitchen and just to the front one that seems to be the main entrance, and thus a possible exit.\n\n";
    std::cout << "Considering what to do next you decide to:\n\n";
    std::cout << "\t1)Look at the furniture.\n\t2)Look in the chimney.\n\t3)Go to the kitchen.\n\t4)Go through the main entrance.\n";
    std::cin >> choice;

    switch (choice) {
        case 1 : {
            if (!jumpScare) {
                std::cout << "You nervously lift the cloth that covers an armchair and see a dusty pillow. Thinking that there might be something useful under it you pick it up and suddenly the biggest spider you've ever seen jumps from under it.\n";
                std::cout << "You try to hold it, but a little scream escapes from your mouth as you back from the armchair. You instinctively cover your mouth to avoid making more noise.\nYou feel nervous as you start worring about your chances of survival.\n";
                wellness -= 1;
                jumpScare = true;
                break;
            } else {
                std::cout << "You know better than to try that again...";
                break;
            }
        }
        case 2 : {
            std::cout << "You aproach the chimney with caution, frightened by the pitch black hue of the hearth. You search through the ashes and find that they're still warm. You have to be more careful, as someone might still be around";
            break;
        }
        case 3 : {
            
        }
    }
  }
}