#include <cstdio>

using namespace std;

class Impl {
  int a;
  Impl(){};

public:
  Impl(int a) : a(a) {}
  void print() { printf("Impl a:%d", a); }
};

class Expl {
  int a;
  Expl(){};

public:
  explicit Expl(int a) : a(a) {}
  void print() { printf("Expl a:%d", a); }
};

int main() {
  Impl i = 1;
  i.print();

  // Expl e = 2; // will give compile error
  Expl e(2);
  e.print();
}
