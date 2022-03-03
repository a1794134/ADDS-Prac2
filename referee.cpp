
Referee::Referee() {
}

int Referee::score(winlose){
int humanscore;
int computerscore;
}
void  Referee::Start(){
		std::string move;
		cout << "/n Welcome to Rock, Paper, Scissors /n let us have a safe and respectful match free of casualties,/n alright, select your move.... /n..../n/n rock, paper or scissors/n";
		cin >> move;

		while (move != "rock" || move != "paper" || move != "scissors"){
			cout << "/n wrong, /n you are so wrong /n you just can't do that /n, select your move.... /n..../n/n rock, paper or scissors/n";
			cin >> move;
		};
		Human * player1 = new Human(move);
		Computer * player2 = new Computer;

	if (player1.move = "rock"){
		if (player2.move = "scissors")
		{
			score(1);
		}
		else score(2);

	}
	else if (player1.move = "scissors"){
		if (player2.move = "paper")
		{
			score(1);
		}
		else score(2);

	}
	else if (player1.move = "paper"){
		if (player2.move = "rock")
		{
			score(1);
		}
		else score(2);

	}


}


























