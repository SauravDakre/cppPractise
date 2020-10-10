#include <cstdio>

using namespace std;

class A {
public:
  int a;
  void display();
};

void A::display() { printf("displaying A a:%d", a); }

struct B {
  int b;
};

int main() {
  A a;
  a.a = 5;
  printf("a: %d", a.a);
  a.display();
  B b;
  b.b = 3;
  printf("b: %d", b.b);
}
