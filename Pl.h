#ifdef _WIN32
#include <tchar.h>
#endif
class Pl {
	private:
	int x1, x2, x3, y1, y2, y3, S_S;
	public:
	Pl(int x1, int x2, int x3, int y1, int y2, int y3)
	{
		this->x1 = x1;
		this->x2 = x2;
		this->x3 = x3;
		this->y1 = y1;
		this->y2 = y2;
		this->y3 = y3;
	}
	int S ()
	{
	  S_S = (x3 - x1) * (y2 - y1);
	  return S_S;
	}
};
