#ifdef _WIN32
#include <tchar.h>
#endif
class Pr : public Pl {
	private:
	int z1,z2, V_V, S_pov;
	public:
	Pr (int x1, int x2, int x3, int y1, int y2, int y3, int z1,int z2) : Pl (x1, x2, x3, y1, y2, y3)
	{
		this->z1 = z1;
		this->z2 = z2;
	}
	int V (S_S)
	{
		V_V = S_S * (z2 - z1);
		return V_V;
	}
	int S_S2 (int S_S, int x1, int x3, int y2, int y1)
	{
	   S_pov = 2*S_S + 2*(z2 - z1) * (x3 - x1) + 2*(z2 - z1) * (y2 - y1);
	   return S_pov;
	}
};
