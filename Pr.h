#ifdef _WIN32
#include <tchar.h>
#endif
#include <math.h>
class Pr {
	private:
	int x1, x2, x3, y1, y2, y3, z1, z2, V_V, S_S;
	public:
	Pr (int x1, int x2, int x3, int y1, int y2, int y3, int z1,int z2)
	{
	    this->x1 = x1;
		this->x2 = x2;
		this->x3 = x3;
		this->y1 = y1;
		this->y2 = y2;
		this->y3 = y3;
		this->z1 = z1;
		this->z2 = z2;
	}
	int V ()
	{
		V_V = (x3 - x1) * (z2 - z1) * (y2 - y1);
		return V_V;
	}
	 float S ()
	{
	   S_S = 2*(x3 - x1) * (y2 - y1) + 2*(z2 - z1) * (x3 - x1) + 2*(z2 - z1) * sqrt((pow(double(y2 - y1), 2)) + pow(double(x2 - x1), 2));
	   return S_S;
	}
};
