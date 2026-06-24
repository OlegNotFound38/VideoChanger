#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>

//#define sleep this_thread::sleep_for(std::chrono::milliseconds(138));

using namespace std;


void sleep(const int milliseconds){
        this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}


void main_menu(){
    cout << "1. "
}

int main(){

    const int label_rows = 17;
    string label[label_rows] = {
        "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=",
        "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-",
        "-|                               |-",
        "|-    V            CCCVC         -|",
        "-|     V         CC  V   CC      |-",
        "|-      V       CC  V      C     -|",
        "-|       V     C   V             |-",
        "|-        V    C  V              -|",
        "-|         V   C V               |-",
        "|-          V   VC         C     -|",
        "-|           V V CC      CC      |-",
        "|-            V    CCCCCC        -|",
        "-|                               |-",
        "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=",
        "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"
    };

    for (int i = 0; i < label_rows; i++){
        cout << label[i] << endl;
        sleep(138);
    }
    cout << endl;
    sleep(1000);

    main_menu();
         

    return 0;
}