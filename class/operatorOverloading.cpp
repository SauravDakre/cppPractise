#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class Fraction {
  int n = 0;
  int d = 1;

public:
  Fraction(int n = 0, int d = 1) : n(n), d(d){};
  Fraction(Fraction const &f) : n(f.n), d(f.d){}; // copy constructor
  int numerator() const { return n; };
  int denominator() const { return d; };

  Fraction &operator=(const Fraction &f);
  Fraction operator+(const Fraction &f) const;
  operator std::string() const;
  void print();
};

Fraction &Fraction::operator=(const Fraction &f) {
  if (this != &f) {
    n = f.numerator();
    d = f.denominator();
  }
  return *this;
};

Fraction Fraction::operator+(const Fraction &f) const {
  return Fraction((n * f.d + d * f.n), (d * f.d));
};

Fraction operator-(const Fraction &l, const Fraction &r) {
  return Fraction(
      (l.numerator() * r.denominator() - l.denominator() * r.numerator()),
      (l.denominator() * r.denominator()));
}

Fraction::operator std::string() const {
  if (d == 1)
    return std::to_string(n);
  else
    return std::to_string(n) + "/" + std::to_string(d);
}

void Fraction::print() { printf("%d / %d\n", n, d); }

int main() {
  Fraction x(1, 2), y(1, 5);
  Fraction u(x); // copy constructor
  u.print();
  Fraction z = x; // assignment operator
  z.print();
  z = (x + y); // '+' operator overloading
  z.print();
  z = 1 - y; // non member operator
  z.print();

  string s = "rational no is: ";
  s += y;
  cout << (s) << endl;
}
