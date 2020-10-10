#include <cstdio>

using namespace std;

class Polygon {
	int sides;
public:
	void setSide(int s);
	int getSide();
}p2;

int main(){

	Polygon p;
	p.setSide(3);
	printf("side: %d\n",p.getSide());
	p2.setSide(5);
	printf("side: %d\n",p2.getSide());
}

void Polygon::setSide(int s){
	sides = s;
}

int Polygon::getSide(){
	return sides;
}
