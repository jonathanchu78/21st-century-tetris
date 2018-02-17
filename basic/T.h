#include <vector>

class T{
	virtual vector<pair<int, int>> getSpots(pair<int, int> center);
	virtual void place(pair<int, int> center);
	const int m_rotations = 4;
}

class T1 : public T{
	// X
	//XXX
	virtual vector<pair<int, int>> getSpots(pair<int, int> center);
	virtual void place(pair<int, int> center);
	const int m_width = 3;
}

class T2 : public T{
	//X
	//XX
	//X
	virtual vector<pair<int, int>> getSpots(pair<int, int> center);
	virtual void place(pair<int, int> center);
	const int m_width = 2;
}

class T3 : public T{
	//XXX
	// X
	virtual vector<pair<int, int>> getSpots(pair<int, int> center);
	virtual void place(pair<int, int> center);
	const int m_width = 3;
}

class T4 : public T{
	// X
	//XX
	// X
	virtual vector<pair<int, int>> getSpots(pair<int, int> center);
	virtual void place(pair<int, int> center);
	const int m_width = 2;
}
