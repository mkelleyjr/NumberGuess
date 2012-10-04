/* Michael L. Kelley Jr.
   10/2/2012
   NumberGuess.cpp
   A guess the number game writeen in c++
*/

 // Includes
 
 #include <iostream>
 #include <cstdlib>
 #include <ctime>
 
 using namespace std;
 
 // Main program
 
    int main()
    {
        // Define some variables the program will use
        
        srand(time(0));     // Seed a random number generator
        
        int ComputerNumber = rand() % 10 + 1;     // Random between 1 and 10
        int TryCount = 0, PlayerGuess;
        
        // Display a welcome message to the player
        
        cout << "\tWelcome to Number Guess!\n\n" << endl;
        cout << "The computer has a number between 1 and 10.\n" << endl;
        
        // Guess loop
        
        do
        {
                 cout << "Enter your guess: " << endl;
                 cin >> PlayerGuess;
                 ++TryCount;    // Increment try count
                 
                 if (PlayerGuess > ComputerNumber)
                    cout << "Your guess is too high!\n\n" << endl;
                    
                    if (PlayerGuess < ComputerNumber)
                       cout << "Your guess is too low!\n\n" << endl;
                       
           } while (PlayerGuess != ComputerNumber);
                 
        // Tell the user how they did
        
        cout << "\nYou got it! It only took you " << TryCount << " guesses!\n" << endl;
        
        system("PAUSE");       // Keep console window open
        
        return 0;              // Exit
        
    }
        
   
   
