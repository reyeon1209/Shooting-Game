char startModel[][16][16] = 
{
	{
		{0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1},
		{0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1},
		{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1},
		{0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1},
		{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1},
		{0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1},
		{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,1},
		{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,1,0,1,0,1,0,1,1,1,1,0,1,0,1},
		{1,0,0,0,1,0,0,0,1,1,1,1,0,0,0,1},
		{1,0,1,0,1,0,1,0,1,1,1,1,0,1,0,1},
		{1,0,0,0,1,0,0,0,1,1,1,1,0,0,0,1},
		{1,0,0,0,1,0,0,0,1,1,1,1,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} }
};

char endModel[][11][20] = {
	{
		{0,1,1,1,0,0,1,1,0,0,1,0,0,0,1,0,1,1,1,1},
		{1,0,0,0,0,1,0,0,1,0,1,1,0,1,1,0,1,0,0,0},
		{1,0,1,1,0,1,1,1,1,0,1,0,1,0,1,0,1,1,1,1},
		{1,0,0,1,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,0},
		{0,1,1,1,0,1,0,0,1,0,1,0,0,0,1,0,1,1,1,1},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,1,1,0,0,1,0,1,0,1,1,1,1,0,1,1,1,0,0},
		{0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0},
		{0,1,0,0,1,0,1,0,1,0,1,1,1,1,0,1,1,1,0,0},
		{0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0},
		{0,0,1,1,0,0,0,1,0,0,1,1,1,1,0,1,0,0,1,0}
	}
};

char pauseModel[][11][20] = {
	{
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0},
		{0,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,1,0,0,0},
		{0,0,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1,0,0,0},
		{0,0,0,0,1,0,0,1,0,0,1,0,1,0,1,0,0,0,0,0},
		{0,0,1,1,1,0,0,1,0,0,1,1,1,0,1,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	}
};

char clearModel[][11][20] = {
	{
		{2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3},
		{3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0},
		{1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,0,1},
		{1,0,0,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0},
		{1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0},
		{1,1,1,0,1,1,1,0,1,1,1,0,1,0,1,0,1,0,0,1},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3},
		{3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2}
	}

};