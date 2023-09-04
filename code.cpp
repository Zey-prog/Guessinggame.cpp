#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	int random;
	int choice;
	int life;
	int restart = 0;
	srand(time(0));
	random = (rand() % (100-1)) + 1;
	
	
	do{
	cout <<"                                   Welcome to GuessTheNumber game!"<<endl;
	cout <<"You have to guess the number between 1 and 100. You'll have limited choices based on the level you choose. Good luck!"<<endl;
	cout <<endl;
	cout <<"Enter the difficulty level: "<<endl;
	cout <<endl;
	cout <<"1 for easy!		2 for medium!		3 for difficult!		4 for ending the game!" <<endl;
	cout <<endl;
	cout <<"Enter the number: ";
	cin >>choice;
	cout <<endl;
	
	if (choice == 4){
		cout <<"You ended the game.";
		break;
	}
	
	else if (choice == 1){
		life = 10;
		cout <<"You have 10 choices for finding the secret number between 1 and 100."<<endl;
		cout <<endl;
		
		for(int i = 1; i <= 10; i++){
			int gnum;
			cout <<"Enter the number: ";
			cin >>gnum;
			life--;
			if (gnum == random){
				cout <<endl<<endl<<endl;
				cout <<"Congratulation you have guessed the correct number!";
				cout <<endl<<endl<<endl;
				break;
			}
			else if(gnum > random){
				cout <<"Nope, "<< gnum << " is not the right number"<<endl;
				cout <<"The secret number is smaller than the number you have chosen"<<endl;
				cout << life <<" choices left.";
				cout <<endl<<endl<<endl;
			}
			else if(gnum < random){
				cout <<"Nope, "<< gnum << " is not the right number"<<endl;
				cout <<"The secret number is greater than the number you have chosen"<<endl;
				cout << life <<" choices left.";
				cout <<endl<<endl<<endl;
			}
			else {
				restart = 1;
			}
			if (life == 0){
				cout <<endl <<endl<<endl;
				cout << "You run out of choices, Better Luck Next Time.." <<endl;
				cout <<"Enter 1 to restart the game: ";
				cin >>restart;
				system ("CLS");
				break;
			}
			
		}
	}
	
	else if (choice == 2){
		life = 7;
		cout << "You have 7 choices for finding the secret number between 1 and 100."<<endl;
		cout <<endl;
		
		for(int i = 1; i <= 7; i++){
			int gnum;
			cout <<"Enter the number: ";
			cin >>gnum;
			life--;
			if (gnum == random){
				cout <<endl<<endl<<endl;
				cout <<"Congratulation you have guessed the correct number!";
				cout <<endl<<endl<<endl;
				break;
			}
			else if(gnum > random){
				cout <<"Nope, "<< gnum << " is not the right number"<<endl;
				cout <<"The secret number is smaller than the number you have chosen"<<endl;
				cout << life <<" choices left.";
				cout <<endl<<endl<<endl;
			}
			else if(gnum < random){
				cout <<"Nope, "<< gnum << " is not the right number"<<endl;
				cout <<"The secret number is greater than the number you have chosen"<<endl;
				cout << life <<" choices left.";
				cout <<endl<<endl<<endl;
			}
			if (life == 0){
				cout <<endl <<endl<<endl;
				cout << "You run out of choices, Better Luck Next Time.." <<endl;
				cout <<"Enter 1 to restart the game: ";
				cin >>restart;
				system ("CLS");
				break;
			}
			
		}
	}
	
	else if (choice == 3){
		life = 5;
		cout << "You have 5 choices for finding the secret number between 1 and 100."<<endl;
		cout <<endl;
		
		for(int i = 1; i <= 5; i++){
			int gnum;
			cout <<"Enter the number: ";
			cin >>gnum;
			life--;
			if (gnum == random){
				cout <<endl<<endl<<endl;
				cout <<"Congratulation you have guessed the correct number!";
				cout <<endl<<endl<<endl;
				break;
			}
			else if(gnum > random){
				cout <<"Nope, "<< gnum << " is not the right number"<<endl;
				cout <<"The secret number is smaller than the number you have chosen"<<endl;
				cout << life <<" choices left.";
				cout <<endl<<endl<<endl;
			}
			else if(gnum < random){
				cout <<"Nope, "<< gnum << " is not the right number"<<endl;
				cout <<"The secret number is greater than the number you have chosen"<<endl;
				cout << life <<" choices left.";
				cout <<endl<<endl<<endl;
			}
			if (life == 0){
				cout <<endl<<endl<<endl;
				cout <<"You run out of choices, Better Luck Next Time.."<<endl;
				cout <<"Enter 1 to restart the game: ";
				cin >>restart;
				system ("CLS");
				break;
			}
			
		}
	}
	
	else {
		cout <<"You have entered a wrong number/case please try again\n.";
		cout <<"Enter number 1 to try again";
		cin >>restart;
		system ("CLS");
		break;
	}
	
	}while(restart == 1);
	
	return 0;
}