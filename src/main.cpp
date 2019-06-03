#include <iostream>
#include <chrono>
#include <string>
#include <unistd.h>
#include "select.h"

//10m = 600s, 20m = 1200s, 30m = 1800s, 40m = 2400s, 50m = 3000s, 60m = 3600s

//Changed "rawScreenTime" Variable name to "defaultScreenTime"



int main()
{
	

	 std::cout << "Please select a time: " << std::endl;
    std::cout << "Press 1 for a reminder every 10 minutes\n";
    std::cout << "Press 2 for a reminder every 20 minutes\n";
    std::cout << "Press 3 for a reminder every 30 minutes\n";
    std::cout << "Press 4 for a reminder every 40 minutes\n";
    std::cout << "Press 5 for a reminder every 50 minutes\n";
    std::cout << "Press 6 for a reminder every hour\n\n >";
    
    //still working with a weird error about g++ cant find header files...i might just use an IDE.
    
}
