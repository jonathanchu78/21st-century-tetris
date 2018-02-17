#include <vector>

vector<pair<int, int>> T1::getSpots(pair<int, int> center){
	vector<pair<int, int>> spots;
	pair<int, int> coord;

	coord = center;
	spots.push_back(coord);
	coord.first--; //top
	spots.push_back(coord);
	coord.first++; coord.second--; //left
	spots.push_back(coord);
	coord.second += 2; //right
	spots.push_back(coord);

	return spots;
}

void T1::place(pair<int, int> center){
	vector<pair<int, int>> spots = getSpots(center);
	//ASSUME ALL SPOTS ARE OPEN. IMPLEMENT CHECKING LATER
	for (auto it = spots.begin(); it != spots.end(); spots++){
			board[it->first][it->second] = OCCUPIED;
	}
}