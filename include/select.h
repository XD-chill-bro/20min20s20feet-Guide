#include <iostream>
#include <chrono>
#include <string>
#include <unistd.h>


int defaultScreenTime = 1200;
int userTimeInput;
int userSelection[6] = {600, 1200, 1800, 2400, 3000, 3600};
int restTime = 20;

class select
{
public:

    void userSelect()
    {
       std::cin >> userTimeInput;
     
    if (userTimeInput == 1)
    {
        system("clear");

        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Just run me in the background \n I will try to remind you with a sound to rest your eyes every 10 minutes" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;

        while (true)
        {

         sleep(userSelection[0]);
        
         //Beep
         std::cout << '\a';
         std::cout << "--------------------------------------------------------" << std::endl;
         std::cout << "Please rest your eyes" << std::endl;
         std::cout << "PRESS ENTER WHEN YOU ARE READY"<< std::endl;

         std::cin.ignore();
 
         std::cout << "Now look at something 20 feet away (about 6 meters) for " << restTime << " seconds" << std::endl;
 
         sleep(restTime);
         std::cout << "--------------------------------------------------------" << std::endl;

         //Beep
         std::cout << '\a';
         std::cout << "Continue working :)" << std::endl;
        }
   }  
    if (userTimeInput == 2)
    {
        system("clear");
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Just run me in the background \n I will try to remind you with a sound to rest your eyes every 20 minutes" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;

        while (true)
        {

         sleep(userSelection[1]);
        
         //Beep
         std::cout << '\a';
         std::cout << "--------------------------------------------------------" << std::endl;
         std::cout << "Please rest your eyes" << std::endl;
         std::cout << "PRESS ENTER WHEN YOU ARE READY"<< std::endl;

         std::cin.ignore();
 
         std::cout << "Now look at something 20 feet away (about 6 meters) for " << restTime << " seconds" << std::endl;
 
         sleep(restTime);
         std::cout << "--------------------------------------------------------" << std::endl;

         //Beep
         std::cout << '\a';
         std::cout << "Continue working :)" << std::endl;
        }
    }


    if (userTimeInput == 3)
    {
        system("clear");
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Just run me in the background \n I will try to remind you with a sound to rest your eyes every 30 minutes" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;

        while (true)
        {

         sleep(userSelection[2]);
        
         //Beep
         std::cout << '\a';
         std::cout << "--------------------------------------------------------" << std::endl;
         std::cout << "Please rest your eyes" << std::endl;
         std::cout << "PRESS ENTER WHEN YOU ARE READY"<< std::endl;

         std::cin.ignore();
 
         std::cout << "Now look at something 20 feet away (about 6 meters) for " << restTime << " seconds" << std::endl;
 
         sleep(restTime);
         std::cout << "--------------------------------------------------------" << std::endl;

         //Beep
         std::cout << '\a';
         std::cout << "Continue working :)" << std::endl;
        }
    }

    if (userTimeInput == 4)
    {
        system("clear");
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Just run me in the background \n I will try to remind you with a sound to rest your eyes every 40 minutes" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;

        while (true)
        {

         sleep(userSelection[3]);
        
         //Beep
         std::cout << '\a';
         std::cout << "--------------------------------------------------------" << std::endl;
         std::cout << "Please rest your eyes" << std::endl;
         std::cout << "PRESS ENTER WHEN YOU ARE READY"<< std::endl;

         std::cin.ignore();
 
         std::cout << "Now look at something 20 feet away (about 6 meters) for " << restTime << " seconds" << std::endl;
 
         sleep(restTime);
         std::cout << "--------------------------------------------------------" << std::endl;

         //Beep
         std::cout << '\a';
         std::cout << "Continue working :)" << std::endl;
        }
    }

    if (userTimeInput == 5)
    {
        system("clear");
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Just run me in the background \n I will try to remind you with a sound to rest your eyes every 50 minutes" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;

        while (true)
        {

         sleep(userSelection[4]);
        
         //Beep
         std::cout << '\a';
         std::cout << "--------------------------------------------------------" << std::endl;
         std::cout << "Please rest your eyes" << std::endl;
         std::cout << "PRESS ENTER WHEN YOU ARE READY"<< std::endl;

         std::cin.ignore();
 
         std::cout << "Now look at something 20 feet away (about 6 meters) for " << restTime << " seconds" << std::endl;
 
         sleep(restTime);
         std::cout << "--------------------------------------------------------" << std::endl;

         //Beep
         std::cout << '\a';
         std::cout << "Continue working :)" << std::endl;
        }
    }

    if (userTimeInput == 6)
    {
        system("clear");
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Just run me in the background \n I will try to remind you with a sound to rest your eyes every 60 minutes" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;

        while (true)
        {

         sleep(userSelection[5]);
        
         //Beep
         std::cout << '\a';
         std::cout << "--------------------------------------------------------" << std::endl;
         std::cout << "Please rest your eyes" << std::endl;
         std::cout << "PRESS ENTER WHEN YOU ARE READY"<< std::endl;

         std::cin.ignore();
 
         std::cout << "Now look at something 20 feet away (about 6 meters) for " << restTime << " seconds" << std::endl;
 
         sleep(restTime);
         std::cout << "--------------------------------------------------------" << std::endl;

         //Beep
         std::cout << '\a';
         std::cout << "Continue working :)" << std::endl;
        }
    } 
      else
      {
        std::cin.ignore();
         std::cout <<"Sorry this is not a command...\n\n";
         userSelect();
      }
    }
    select();
    ~select();
    
};
