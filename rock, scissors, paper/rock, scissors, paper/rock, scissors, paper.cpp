# include <iostream>
# include <time.h>
# include <string>
#define DEBUG
#define SCORE

using namespace std;

int main() 
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	cout << "!game!\n" << "1 = scissors\n" << "2 = rook\n" << "3 = papers" << endl;

	short num_rand;
	short num_playr;

	short score_win = 0;
	short score_loss = 0;

	bool game_stop = false;
#ifdef DEBUG
	cout << "опередиления переменых" << endl;
#endif // DEBUG
	do {
		num_rand = 1 + rand() % 3;
		cout << "\nenter num game: ";
		cin >> num_playr;
#ifdef DEBUG
	cout << "switch case начало" << endl;
#endif // DEBUG
		switch (num_rand) {
			case 1: {
#ifdef DEBUG
	cout << "case 1" << endl
#endif // DEBUG
				if (num_playr == 1) {
					cout << "draw" << endl;
				}
				else if (num_playr == 2) {
					cout << "You loss" << endl;
					score_loss++;
				}
				else if (num_playr == 3) {
					cout << "you win" << endl;
					score_loss++;
				}
				break;
			}
#ifdef DEBUG
	cout << "case 2" << endl;
#endif // DEBUG
			case 2: {
				if (num_playr == 1) {
					cout << "You loss" << endl;
					score_loss++;
				}
				else if (num_playr == 2) {
					cout << "draw" << endl;
				}
				else if (num_playr == 3) {
					cout << "You win" << endl;
					score_win++;
				}
				break;
			}
#ifdef DEBUG
	cout << "case 3 " << endl;
#endif // DEBUG
			case 3: {
				if (num_playr == 1) {
					cout << "You win" << endl;
					score_win++;
				}
				else if (num_playr == 2) {
					cout << "you loss" << endl;
					score_loss++;
				}
				else if (num_playr == 3) {
					cout << "draw" << endl;
				}
				break;
			}
		}
#ifdef SCORE
		cout << "score win: " << score_win << endl;
		cout << "score loss: " << score_loss << endl;

		if (score_win == 10) {
			cout << "!You win game!" << endl;
			game_stop = true;
		}
		else if (score_loss == 10) {
			cout << "You loss game" << endl;
		}
#endif // SCORE
	} while (!game_stop);
#ifdef DEBUG
	cout << "конец do while" << endl;
#endif // DEBUG

	return 0;
}