//Lab 7B
//Programmer: Luke Tascone 

#include <iostream>
#include <string>
using namespace std; 

const int NUM_PLAYERS = 3;
const int NUM_SCORES = 4;
int score;
{
void inputScores ( string [], int [][NUM_SCORES] );
void showScores ( string [], int [][NUM_SCORES] );
void addOne ( int [][NUM_SCORES] );
int validateInput ( int );


int main ()
{
    
    string names[NUM_PLAYERS] = { "John", "Conrad", "David" };

    int athletes[NUM_PLAYERS][NUM_SCORES]; 
    
    inputScores ( names, athletes );

    showScores ( names [], athletes );

    addOne ( athletes );
    


    return 0; 
}

void inputScores ( string names[], int athletes[][NUM_SCORES])
{

    for ( int row = 0; row < NUM_PLAYERS; row++)
    {

        cout << "Scores for" << names[row] << ":";

        for ( int col = 0; col < NUM_SCORES; col++ )
        {
            cout << "Enter Score" << col + 1 << ":";
            cin >> score;
            athletes[row][col] = validateInput(score);
        }

    }
    
}

void showScores ( string name[], int athletes[][NUM_SCORES]);
{
    for ( int row = 0; row < NUM_PLAYERS; row++)
    {

        cout << "Scores for " << name[row] << endl; 

        for ( int col = 0; col < NUM_SCORES; col++ )
        {
            cout << athletes[row][col];  
        }

    }
}

void addOne ( int athletes[][NUM_SCORES] );
{
    for ( int row = 0; row < NUM_PLAYERS; row++ )
    {
        for ( int col = 0; col < NUM_SCORES; col++ )
            athletes[row][col] += 1;
    }
}

int validateInput ( int score )
{

    while ( score < 0 || score > 10 )
    {
        cout << "Invalid score, please enter a score between 0 and 10: ";
        cin >> score; 
    }

   return score; 
}