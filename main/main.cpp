#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
#include <filesystem>

//#define sleep this_thread::sleep_for(std::chrono::milliseconds(138));

using namespace std;

void main_menu();
void trim_video();

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
    sleep(80);
    cout << "3. Trim the part" << endl;
    sleep (120);
    cout << "4. Back to main menu";

    short u_cb; cin >> u_cb;
    if (u_cb == 4) main_menu();
    else{
        cout << "Enter the full video path";
        string video_path; cin >> video_path;
        cout << "How to named video?" << endl;
        string video_name; cin >> video_name;

        /*short hours, min, sec,
            end_h, end_m, end_s;*/
        string start_time, end_time;

        if (u_cb == 3){
            cout << "Enter the beginning time in format (HH:MM:SS)"; cin >> start_time;
            cout << "Enter the end time in format (HH:MM:SS)"; cin >> end_time;

            /*
            cout << "Enter the beginning...";
            cout << endl << "Hour: "; cin >> hours;
            cout << endl << "Minute: "; cin >> min;
            cout << endl << "Second: "; cin >> sec;

            cout << endl << "Enter the end...";
            
            cout << endl << "Hour: "; cin >> end_h;
            cout << endl << "Minute: "; cin >> end_m;
            cout << endl << "Second: "; cin >> end_s;
            cout << endl;
            */    
        }

        



    }    
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