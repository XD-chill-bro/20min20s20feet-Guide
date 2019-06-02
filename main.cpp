#include <iostream>
#include <chrono>
#include <unistd.h>

using namespace std;

//Screentime in seconds
//20min = 1200
int rawScreenTime = 1200;
int restTime = 20;

int main()
{
    cout << "--------------------------------------------------------" << endl;
    cout << "Just run me in the background." << endl;
    cout << "I will try to remind you with a sound to rest your eyes." << endl;
	cout << "--------------------------------------------------------" << endl;

    while (true)
    {

        sleep(rawScreenTime);
        
        //Beep
        cout << '\a';
        cout << "--------------------------------------------------------" << endl;
        cout << "Please rest your eyes" << endl;
        cout << "PRESS ENTER WHEN YOU ARE READY"<< endl;

        cin.ignore();

        cout << "Now look at something 20 feet away (about 6 meters) for " << restTime << " seconds" << endl;

        sleep(restTime);
        cout << "--------------------------------------------------------" << endl;

        //Beep
        cout << '\a';
        cout << "Continue working :)" << endl;
    }
}