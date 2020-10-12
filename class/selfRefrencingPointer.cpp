#include <cstdio>

using namespace std;

class C {
  int c;

public:
  C(int c) : c(c) {}
  int getC() const;
  int getC2() const;
};

int C::getC() const { return c; }

int C::getC2() const { return this->getC(); }

int main() {
  C x = 1;
  printf("x: %d", x.getC());
  printf("x: %d", x.getC2());
}
