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

void trim_video(){
    cout << endl;
    for (short i = 0; i < 4; i++){
        cout << ". ";
        sleep(150); 
    }
    cout << endl;

    cout << "1. Trim the beginning" << endl;
    sleep(80);
    cout << "2. Trim the end" << endl;
    sleep (120);
    cout << "3. Back to main menu";

    short u_cb; cin >> u_cb;
    if (u_cb == 1) u_cb = 1; //trim_begin();
    else if (u_cb == 2) u_cb = 2; //trim_end();
    else if (u_cb == 3) main_menu();     
}


void main_menu(){
    cout << "1. Trim a video" << endl;
    sleep(80);
    cout << "2. Quit" << endl;

    short user_callback; cin >> user_callback;
    if (user_callback == 1) trim_video();
    else if (user_callback == 2){
        cout << "Good luck!";
    }
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