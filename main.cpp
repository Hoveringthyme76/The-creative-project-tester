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
               cout << "You came up with " << ideasGenerated << " unique ideas.\nGreat job!";
               break;
          case 20:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nAmazing job!";
               break;
          case 30:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nWay to stick in out!";
               break;
          case 40:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nGive yourself a well deserved break. You earned it!";
               break;
          case 50:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nYou reached the half way mark. Nice work!";
               break;
          case 60:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nYou are extremly creative today!";
               break;
          case 70:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nExcellent work! not that many people produce that many ideas in one sitting.";
               break;
          case 80:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nDid you achieve a flow state or did you achieve a flow state? Well done!";
               break;
          case 90:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nNow that is how you make a breakthrough!";
               break;
          case 100:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nCongradulations! You managed to not only train your creative stamina, but also yourself as a whole.\n" << "I knew you can do it!";
               break;
          default:
               cout << "You came up with " << ideasGenerated << " unique ideas.\nGood job!";
     }
    
     return 0;
}

void introduction()
{
     cout << "Welcome to the creative project tester!\n" << "Please put in any ideas you have down below, then once you are done, press enter while not inputing anything!\n";
     this_thread::sleep_for(5s);
     cout << "Remember, you are allowed to submit 100 ideas in total:\n";
}

bool ideaLengthCheck(int ideaLength)
{
     bool continueLoop = true;
     bool breakLoop = false;

     bool loopAction = (ideaLength > 0) ? continueLoop : breakLoop;
     return loopAction;
}
