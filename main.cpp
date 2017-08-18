#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;


void letterA();
void letterB();
void letterC();
void letterD();
void letterE();
void letterF();
void letterG();
void letterH();
void letterI();
void letterJ();
void letterK();
void letterL();
void letterM();
void letterN();
void letterO();
void letterP();
void letterQ();
void letterR();
void letterS();
void letterT();
void letterU();
void letterV();
void letterW();
void letterX();
void letterY();
void letterZ();
void spaceBar();
inline void mySleep(clock_t sec);


int main()
{
    char userArray[20];
    string userAlphabet;
    int counter = 0;

    cout << "Welcome To The Dot Alphabet App" << endl;
    mySleep(5);

    cout << "\n\nEnter Your Alphabet To Proceed (Not more than 20 characters): ";
    cout << endl;
    getline(cin, userAlphabet);
    cout << "\n" << endl;

    userArray[0] = userAlphabet[0];
    userArray[1] = userAlphabet[1];
    userArray[2] = userAlphabet[2];
    userArray[3] = userAlphabet[3];
    userArray[4] = userAlphabet[4];
    userArray[5] = userAlphabet[5];
    userArray[6] = userAlphabet[6];
    userArray[7] = userAlphabet[7];
    userArray[8] = userAlphabet[8];
    userArray[9] = userAlphabet[9];
    userArray[10] = userAlphabet[10];
    userArray[11] = userAlphabet[11];
    userArray[12] = userAlphabet[12];
    userArray[13] = userAlphabet[13];
    userArray[14] = userAlphabet[14];
    userArray[15] = userAlphabet[15];
    userArray[16] = userAlphabet[16];
    userArray[17] = userAlphabet[17];
    userArray[18] = userAlphabet[18];
    userArray[19] = userAlphabet[19];



   for(int i = 0;i <= userAlphabet.length()- 1;i++){
        if( ( userArray[i] == 'A') || ( userArray[i] == 'a')){
                    letterA();
        }else if ( ( userArray[i] == 'B') || (userArray[i] == 'b')){
                    letterB();
        }else if ((userArray[i] == 'C') || (userArray[i] == 'c')){
                    letterC();
        }else if ((userArray[i] == 'D') || (userArray[i] == 'd')){
                    letterD();
        }else if ((userArray[i] == 'E' ) || (userArray[i] == 'e')){
                    letterE();
        }else if ((userArray[i] == 'F') || (userArray[i] == 'f')){
                    letterF();
        }else if ((userArray[i] == 'G') || (userArray[i] == 'g')){
                    letterG();
        }else if ((userArray[i] == 'H') || (userArray[i] == 'h')){
                    letterH();
        }else if ((userArray[i] == 'I') || (userArray[i] == 'i')){
                    letterI();
        }else if ((userArray[i] == 'J') || (userArray[i] == 'j')){
                    letterJ();
        }else if ((userArray[i] == 'K') || (userArray[i] == 'k')){
                    letterK();
        }else if ((userArray[i] == 'L') || (userArray[i] == 'l')){
                    letterL();
        }else if ((userArray[i] == 'M') || (userArray[i] == 'm')){
                    letterM();
        }else if ((userArray[i] == 'N') || (userArray[i] == 'n')){
                    letterN();
        }else if ((userArray[i] == 'O') || (userArray[i] == 'o')){
                    letterO();
        }else if ((userArray[i] == 'P') || (userArray[i] == 'p')){
                    letterP();
        }else if ((userArray[i] == 'Q') || (userArray[i] == 'q')){
                    letterQ();
        }else if ((userArray[i] == 'R') || (userArray[i] == 'r')){
                    letterR();
        }else if ((userArray[i] == 'S') || (userArray[i] == 's')){
                    letterS();
        }else if ((userArray[i] == 'T') || (userArray[i] == 't')){
                    letterT();
        }else if ((userArray[i] == 'U') || (userArray[i] == 'u')){
                    letterU();
        }else if ((userArray[i] == 'V') || (userArray[i] == 'v')){
                    letterV();
        }else if ((userArray[i] == 'W') || (userArray[i] == 'w')){
                    letterW();
        }else if ((userArray[i] == 'X') || (userArray[i] == 'x')){
                    letterX();
        }else if ((userArray[i] == 'Y') || (userArray[i] == 'y')){
                    letterY();
        }else if ((userArray[i] == 'Z') || (userArray[i] == 'z')){
                    letterZ();
        }else if ( userArray[i] == ' '){
                    spaceBar();
        }else if( userAlphabet.length() > 20 )
        {
            userAlphabet = userAlphabet.substr( 0, 20 );
            cout << "Input \"" << userAlphabet << "\" exceeds maximum length (20).\n"
            << "We have Limited Alphabets to first 20 characters.\n" << endl;
            if( ( userArray[i] == 'A') || ( userArray[i] == 'a')){
                        letterA();
            }else if ( ( userArray[i] == 'B') || (userArray[i] == 'b')){
                        letterB();
            }else if ((userArray[i] == 'C') || (userArray[i] == 'c')){
                        letterC();
            }else if ((userArray[i] == 'D') || (userArray[i] == 'd')){
                        letterD();
            }else if ((userArray[i] == 'E' ) || (userArray[i] == 'e')){
                        letterE();
            }else if ((userArray[i] == 'F') || (userArray[i] == 'f')){
                        letterF();
            }else if ((userArray[i] == 'G') || (userArray[i] == 'g')){
                        letterG();
            }else if ((userArray[i] == 'H') || (userArray[i] == 'h')){
                        letterH();
            }else if ((userArray[i] == 'I') || (userArray[i] == 'i')){
                        letterI();
            }else if ((userArray[i] == 'J') || (userArray[i] == 'j')){
                        letterJ();
            }else if ((userArray[i] == 'K') || (userArray[i] == 'k')){
                        letterK();
            }else if ((userArray[i] == 'L') || (userArray[i] == 'l')){
                        letterL();
            }else if ((userArray[i] == 'M') || (userArray[i] == 'm')){
                        letterM();
            }else if ((userArray[i] == 'N') || (userArray[i] == 'n')){
                        letterN();
            }else if ((userArray[i] == 'O') || (userArray[i] == 'o')){
                        letterO();
            }else if ((userArray[i] == 'P') || (userArray[i] == 'p')){
                        letterP();
            }else if ((userArray[i] == 'Q') || (userArray[i] == 'q')){
                        letterQ();
            }else if ((userArray[i] == 'R') || (userArray[i] == 'r')){
                        letterR();
            }else if ((userArray[i] == 'S') || (userArray[i] == 's')){
                        letterS();
            }else if ((userArray[i] == 'T') || (userArray[i] == 't')){
                        letterT();
            }else if ((userArray[i] == 'U') || (userArray[i] == 'u')){
                        letterU();
            }else if ((userArray[i] == 'V') || (userArray[i] == 'v')){
                        letterV();
            }else if ((userArray[i] == 'W') || (userArray[i] == 'w')){
                        letterW();
            }else if ((userArray[i] == 'X') || (userArray[i] == 'x')){
                        letterX();
            }else if ((userArray[i] == 'Y') || (userArray[i] == 'y')){
                        letterY();
            }else if ((userArray[i] == 'Z') || (userArray[i] == 'z')){
                        letterZ();
            }else if ( userArray[i] == ' '){
                        spaceBar();
            }else{
               cout << "Error! 202 \"" <<  userArray[i] << "\"is not an ALPHABET!\n" << endl;
            }
        }else{
                cout << "Error! 202 \"" <<  userArray[i] << "\" is not an ALPHABET!\n" << endl;
            }

    }


    mySleep(4);
    cout << "\n\n" << "Thanks for using our app we hope you loved it" << endl;
}



void letterA(){

    cout << "\t"<< "\t" <<" " << "........." << endl;
    mySleep(1);
    cout << "\t"<< "\t. ......" << ". ." <<endl;
    mySleep(1);
    cout << "\t"<< "       " << ". ." <<"\t" << " " <<". ."  << endl;
    mySleep(1);
    cout << "\t"<< "      " << ". ." << "\t" << "  " <<". ." <<endl;
    mySleep(1);
    cout << "\t"<< "     " << ". ............. ." <<endl;
    mySleep(1);
    cout << "\t"<< "    " << ". ............... ." <<endl;
    mySleep(1);
    cout << "\t"<< "   " << ". ." << "\t\t" << "     " <<". ." << endl;
    mySleep(1);
    cout << "\t"<< "  " << ". ." << "\t\t" << "      " <<". ." << endl;
    mySleep(1);
    cout << "\t"<< " " << ". ." << "\t\t" << "       " <<". ." << endl;
    mySleep(1);
    cout << "\t"<< "" << "..." << "\t\t" << "        " <<"...\n" << endl;
}

void letterB(){

    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ..............." << endl;
    mySleep(1);
    cout << "\t" << ". ..............." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << "..................\n" << endl;
}

void letterC(){

    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" <<endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << "..................\n" << endl;
}

void letterD(){

    cout << "\t" << "................." << endl;
    mySleep(1);
    cout << "\t" << ". .............. ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". .............. ." << endl;
    mySleep(1);
    cout << "\t" << ".................\n" << endl;

}

void letterE(){

    cout << "\t" << ".................." << endl;

    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ..............." << endl;
    mySleep(1);
    cout << "\t" << ". ..............." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" <<  endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" <<  endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" <<  endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << "..................\n" << endl;

}

void letterF(){
      cout << "\t............";
      mySleep(1);
      cout << "\n\t............";
      mySleep(1);
      cout << "\n\t..";
      mySleep(1);
      cout <<"\n\t..";
      mySleep(1);
      cout <<"\n\t..";
      mySleep(1);
      cout << "\n\t............";
      mySleep(1);
      cout << "\n\t............";
      mySleep(1);
      cout << "\n\t..""\n\t..";
      mySleep(1);
      cout << "\n\t..";
      mySleep(1);
      cout << "\n\t..";
      mySleep(1);
      cout << "\n\t..";
      mySleep(1);
      cout <<"\n" << endl;
}

void letterG(){

    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". .       ......." << endl;
    mySleep(1);
    cout << "\t" << ". .       ........" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << "..................\n" << endl;
}

void letterH(){

    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << "..\n"  << endl;
}

void letterI(){

    cout << "\t" << "..................." << endl;
    mySleep(1);
    cout << "\t" << "..................." << endl;
    mySleep(1);
    cout << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << "..................." << endl;
    mySleep(1);
    cout << "\t" << "...................\n" << endl;

}

void letterJ(){

    cout << "\t" << "      ............." << endl;
    mySleep(1);
    cout << "\t" << "      ........... ." << endl;
    mySleep(1);
    cout << "\t\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t\t" << ". ." << endl;
    mySleep(1);
    cout << "              ...       " << ". ."  << endl;
    mySleep(1);
    cout << "              . .       " << ". ."  << endl;
    mySleep(1);
    cout << "              . .       " << ". ."  << endl;
    mySleep(1);
    cout << "\t" << "      .  .......  ." << endl;
    mySleep(1);
    cout << "\t" << "      .............\n" << endl;

}

void letterK(){

    cout << "\t" << ".." << "       .." << endl;
    mySleep(1);
    cout << "\t" << ".." <<"      .." << endl;
    mySleep(1);
    cout << "\t" << ".." <<  "     .." << endl;
    mySleep(1);
    cout << "\t" << ".." << "    .." << endl;
    mySleep(1);
    cout << "\t" << ".." <<  "   .." << endl;
    mySleep(1);
    cout << "\t" << ".." << "  .." << endl;
    mySleep(1);
    cout << "\t" << "....." << endl;
    mySleep(1);
    cout << "\t" << "....." << endl;
    mySleep(1);
    cout << "\t" << ".." <<  "  .." << endl;
    mySleep(1);
    cout << "\t" << ".." <<  "   .." <<endl;
    mySleep(1);
    cout << "\t" << ".." <<  "    .." <<endl;
    mySleep(1);
    cout << "\t" << ".." <<  "     .." << endl;
    mySleep(1);
    cout << "\t" << ".." << "      .." <<endl;
    mySleep(1);
    cout << "\t" << ".." <<  "       ..\n" <<endl;

}

void letterL(){

    cout << "\t" << "..." << "\t\t" <<endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << "..................\n" << endl;
}

void letterM(){

    cout << "\t" << "..  " <<"          " << "  .." << endl;
    mySleep(1);
    cout << "\t" << "..." <<"          " << "  ..." << endl;
    mySleep(1);
    cout << "\t" << "...." <<"          " << "...." << endl;
    mySleep(1);
    cout << "\t" << "..  .." << "      "  << "..  .."  << endl;
    mySleep(1);
    cout << "\t" << "..   .." << "    "  << "..   .."  << endl;
    mySleep(1);
    cout << "\t" << "..    .." << "  "  << "..    .."  << endl;
    mySleep(1);
    cout << "\t" << "..     .." << ""  << "..     .."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << "..\n"  << endl;


}

void letterN(){

    cout << "\t" << "..." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << "...." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << "..  ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << "..   ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << "..    ." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << "..     ." << "\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << "..      ." << "\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << "..       ." << "\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << "..        ." << "\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << "..         ." << "\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << "..          ." << "\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << "..           ." << ".." << ".."  << endl;
    mySleep(1);
    cout << "\t" << "..            ." << "." << "..\n"  << endl;

}

void letterO(){

    cout << "\t" << "..................." << endl;
    mySleep(1);
    cout << "\t" << ". ............... ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ............... ." << endl;
    mySleep(1);
    cout << "\t" << "...................\n" << endl;
}

void letterP(){

    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" <<  endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" <<  endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" <<  endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" <<  endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" <<  endl;
    mySleep(1);
    cout << "\t" << "...\n" << "\t\t" <<  endl;

}

void letterQ(){

    cout << "\t" << "..................." << endl;
    mySleep(1);
    cout << "\t" << ". ............... ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t" << ". ..............  ." << endl;
    mySleep(1);
    cout << "\t" << ".................. ." << endl;
    mySleep(1);
    cout << "\t\t\t" << "  " << ". ." << endl;
    mySleep(1);
    cout << "\t\t\t" << "   " << ". ." << endl;
    mySleep(1);
    cout << "\t\t\t" << "    " << "...\n" << endl;

}

void letterR(){

    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ". ..............." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << " .."  << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << "  .."  << endl;
    mySleep(1);
    cout << "\t" << "..." << "\t\t" << "   ..\n"  << endl;

}

void letterS(){

    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ." << "\t\t" << endl;
    mySleep(1);
    cout << "\t" << ". ................" << endl;
    mySleep(1);
    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" <<   "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" <<  "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" <<  "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" <<  "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" << "..................\n" << endl;

}

void letterT(){

    cout << "\t" << "..................." << endl;
    mySleep(1);
    cout << "\t" << "......... ........." << endl;
    mySleep(1);
    cout << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ." << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << ". ."  << endl;
    mySleep(1);
    cout << "\t\t" << "...\n"  << endl;


}

void letterU(){

    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".................." << endl;
    mySleep(1);
    cout << "\t" << "..................\n" << endl;

}

void letterV(){

    cout << "     " << ".."  << "                     .."<<endl;
    mySleep(1);
    cout << "      " << ".."  << "                   .."<<endl;
    mySleep(1);
    cout << "       " << ".."  << "                 .."<<endl;
    mySleep(1);
    cout << "\t" << ".."  << "               .."<<endl;
    mySleep(1);
    cout << "\t" << " ..       " << "      .." <<endl;
    mySleep(1);
    cout << "\t" << "  ..      " << "     .." <<endl;
    mySleep(1);
    cout << "\t" << "   ..      " << "   .." <<endl;
    mySleep(1);
    cout << "\t" << "    ..     " << "  .." <<endl;
    mySleep(1);
    cout << "\t" << "     ..     " << ".." <<endl;
    mySleep(1);
    cout << "\t" << "      ..   " << ".." <<endl;
    mySleep(1);
    cout << "\t" << "       .. " << ".." <<endl;
    mySleep(1);
    cout << "\t\t" << "" << "...\n" << endl;

}

void letterW(){

    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << ".." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << "..     .." << ""  << "..     .."  << endl;
    mySleep(1);
    cout << "\t" << "..    .." << "  "  << "..    .."  << endl;
    mySleep(1);
    cout << "\t" << "..   .." << "    "  << "..   .."  << endl;
    mySleep(1);
    cout << "\t" << "..  .." << "      "  << "..  .."  << endl;
    mySleep(1);
    cout << "\t" << "...." <<"          " << "...." << endl;
    mySleep(1);
    cout << "\t" << "..." <<"          " << "  ...\n" << endl;

}

void letterX(){

    cout << "\t" << " ..       " << "      .." <<endl;
    mySleep(1);
    cout << "\t" << "  ..      " << "     .." <<endl;
    mySleep(1);
    cout << "\t" << "   ..      " << "   .." <<endl;
    mySleep(1);
    cout << "\t" << "    ..     " << "  .." <<endl;
    mySleep(1);
    cout << "\t" << "     ..     " << ".." <<endl;
    mySleep(1);
    cout << "\t" << "      ..   " << ".." <<endl;
    mySleep(1);
    cout << "\t" << "       .. " << ".." <<endl;
    mySleep(1);
    cout << "\t\t" << "" << "..." << endl;
    mySleep(1);
    cout << "\t" << "       "  << ".." << " .." <<endl;
    mySleep(1);
    cout << "\t" << "      "  << ".." << "   .." <<endl;
    mySleep(1);
    cout << "\t" << "     "  << ".." << "     .." <<endl;
    mySleep(1);
    cout << "\t" << "    "  << ".." << "       .." <<endl;
    mySleep(1);
    cout << "\t" << "   "  << ".."  << "         .."<<endl;
    mySleep(1);
    cout << "\t" << "  "  << ".."  << "           .."<<endl;
    mySleep(1);
    cout << "\t" << " "  << ".."  << "             .."<<endl;
    mySleep(1);
    cout << "\t" << ""  << ".."  << "               ..\n"<<endl;


}

void letterY(){

    cout << "\t" << " .." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << " .." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << " .." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << " .." << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" << " .." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << " .." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << " .." << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << " ................." << endl;
    mySleep(1);
    cout << "\t" << " ................." << endl;
    mySleep(1);
    cout << "\t" << "\t\t" << ".." << endl;
    mySleep(1);
    cout << "\t" <<  "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" <<  "\t\t" << ".."  << endl;
    mySleep(1);
    cout << "\t" << " ................." << endl;
    mySleep(1);
    cout << "\t" << " .................\n" << endl;

}

void letterZ(){

    cout << "\t" << "    .............." << endl;
    mySleep(1);
    cout << "\t" << "    .............." << endl;
    mySleep(1);
    cout << "\t\t\t" << ".." <<endl;
    mySleep(1);
    cout << "\t\t" << "       " << ".." << endl;
    mySleep(1);
    cout << "\t\t" << "      " << ".." << endl;
    mySleep(1);
    cout << "\t\t" << "     " << ".." << endl;
    mySleep(1);
    cout  << "\t\t" << "    " << ".." << endl;
    mySleep(1);
    cout << "\t\t" << "   " << ".." << endl;
    mySleep(1);
    cout << "\t\t" << "  " << ".." << endl;
    mySleep(1);
    cout << "\t\t" << " " << ".." << endl;
    mySleep(1);
    cout << "\t\t" << "" << ".." << endl;
    mySleep(1);
    cout << "\t" << "       "  << ".." <<endl;
    mySleep(1);
    cout << "\t" << "      "  << ".." <<endl;
    mySleep(1);
    cout << "\t" << "     "  << ".." <<endl;
    mySleep(1);
    cout << "\t" << "    "  << ".." <<endl;
    mySleep(1);
    cout << "\t" << "   "  << ".." <<endl;
    mySleep(1);
    cout << "\t" << "   ..............." << endl;
    mySleep(1);
    cout << "\t" << "   ...............\n" << endl;

}

void spaceBar(){

    cout << "\n\n\n" << endl;;

}

inline void mySleep(clock_t sec){

   clock_t start_time = clock();
   clock_t end_time = (sec) * 150 + start_time;
   while(clock() != end_time);
}

