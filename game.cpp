#include <iostream>
using namespace std;
// Function to take player guesses
void guessNumberPlayer(int guess[]){
for(int i = 0;i <= 2;i++){
cout<< "Enter guess number " << i + 1<< ": ";
cin>>guess[i];
}
}
// Function to check the number of correct guesses
int checkCorrectGuess(int guess[], const int num[]){
int correctGuess = 0;
for(int i = 0;i <= 2;i++){
for(int j = 0;j <= 2;j++){
if(guess[i] == num[j]){
correctGuess++;
}
}
}
return correctGuess;
}
int main(){
// generate guess number
const int num[3] = {6, 3, 1};
int guess[3];
char playAgain;
do{
cout<<"Welcome! Game for guess three numbers."<<endl;
guessNumberPlayer(guess);
// Check the correct guess
int correctGuess = checkCorrectGuess(guess, num);
cout<<"You guessed "<<correctGuess<<" number correctly!"<<endl;
// Ask for user to play again or not
cout<<"Do you want to play again? (y/n): ";
cin>>playAgain;
}
while(playAgain == 'y' || playAgain == 'Y');
cout << "Thanks ,welcome again later!" << endl;
return 0;
}
