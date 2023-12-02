#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNumber = rand() % 100+ 1;
    int guess;
    int attempts=0;

    do
    {
        cout<<"enter your guess:";
        cin>>guess;
        attempts++;

        if (guess>secretNumber)
        {
            cout<<"too high! try again.\n";
        }
        else if(guess<secretNumber)
        {
            cout<<"too low! try again.\n";
        }
        else
        {
            cout<<"congragulations! you guessed the number in"<<attempts<<"attempts!\n";
        }
    } while (guess!=secretNumber);

    return 0;
}