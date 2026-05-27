#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std::chrono;
using namespace std;

/*
     CHALLENGE MODE:
     Rules to challenge mode: I will attempt to put limitations on myself while programming this program. Depending on what the constraints are, will be listed with this comment.

     For this project, I will have to not include any if else conditionals. Which means only tenary operators or switches are allowed when applying the logic. Loops are still allowed.
*/

void introduction();
bool ideaLengthCheck(int ideaLength);

int main()
{
     introduction();

     string ideaInput;
     int ideasGenerated = 0, i = 0;     //The i variable is used to start the loop, along with the loopContinuity variable.
     bool loopContinuity = true;

     int ideaLength;
     
     while(i != 101 && loopContinuity == true)
     {
          getline(cin, ideaInput);
          ideaLength = ideaInput.length();
          loopContinuity = ideaLengthCheck(ideaLength);
          
          ideasGenerated++;
          i++;
     }
     
     ideasGenerated -= 1;

     switch(ideasGenerated)
     {
          case 10:
          case 11:
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nGreat job!";
               break;
          case 20:
          case 21:
          case 22:
          case 23:
          case 24:
          case 25:
          case 26:
          case 27:
          case 28:
          case 29:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nAmazing job!";
               break;
          case 30:
          case 31:
          case 32:
          case 33:
          case 34:
          case 35:
          case 36:
          case 37:
          case 38:
          case 39:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nWay to stick in out!";
               break;
          case 40:
          case 41:
          case 42:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          case 48:
          case 49:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nGive yourself a well deserved break. You earned it!";
               break;
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 59:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nYou reached the half way mark. Nice work!";
               break;
          case 60:
          case 61:
          case 62:
          case 63:
          case 64:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nYou are extremly creative today!";
               break;
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nExcellent work! not that many people produce that many ideas in one sitting.";
               break;
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nDid you achieve a flow state or did you achieve a flow state? Well done!";
               break;
          case 90:
          case 91:
          case 92:
          case 93:
          case 94:
          case 95:
          case 96:
          case 97:
          case 98:
          case 99:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nNow that is how you make a breakthrough!";
               break;
          case 100:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nCongradulations! You managed to not only train your creative stamina, but also yourself as a whole.\n" << "I knew you can do it!";
               break;
          default:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nGood job!";
     }
    
     this_thread::sleep_for(6s);
     return 0;
}

void introduction()
{
     cout << "Welcome to the creative project tester!\n" << "Please put in any ideas you have down below, then once you are done, press enter while not inputing anything!\n";
     this_thread::sleep_for(3s);
     cout << "Remember, you are allowed to submit 100 ideas in total:\n";
}

bool ideaLengthCheck(int ideaLength)
{
     bool continueLoop = true;
     bool breakLoop = false;

     bool loopAction = (ideaLength > 0) ? continueLoop : breakLoop;
     return loopAction;
}
