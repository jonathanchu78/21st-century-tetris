// Example program
#include <iostream>
#include <string>

const char EMPTY = 'e';
const char OCCUPIED = 'o';

char board[20][10] = { 0 };

int cost(int x, int y){
	//assume we're just looking at the bottom row
	int cost = 0;
	for (int k = 0; k < 10; k++){
		if (board[19][k] == EMPTY)
			cost++;
	}
	return cost;
}

int main()
{
    int pos = 0;
    int costs[10];
    //compute costs for each position
    for (int k = 9; k >= 0;  k--){
		costs[pos] = cost()    	

    	//check next spot
		if (pos == 5) break;
		else if (pos > 5) pos -= k;
		else pos += k;
    }
}
