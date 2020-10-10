#include <cstdio>
#include <string>

using namespace std;

class Student {
  int id;
  string name;

public:
  // default constructor
  Student();

  // parameterized constructor
  Student(int);

  // constructor overloading
  Student(int, string);

  // copy constructor
  Student(const Student &);

  // copy operator
  Student &operator=(const Student &);

  // destructor
  ~Student();

  void display() { printf("id:%d, name:%s\n", id, name.c_str()); }
};

Student::Student() : id(-1), name("") { puts("default constructor"); }

Student::Student(int id) : id(id), name("") {
  puts("constructor with one parameter");
}

Student::Student(int id, string name) : id(id), name(name) {
  puts("constructor with two parameter");
}

Student::Student(const Student &s) {
  puts("copy constructor");
  id = s.id;
  name = "cloned_" + s.name;
}

Student::~Student() { printf("destructor for %d %s\n", id, name.c_str()); }

Student &Student::operator=(const Student &s) {
  puts("copy operator");
  // if (this != s) {
  id = s.id;
  name = "cloned_by_operator_" + s.name;
  //`}
  return *this;
}

int main() {
  Student a, b(1), c(2, "sam");
  a.display();
  b.display();
  c.display();
  a = c;
  a.display();
  Student q(c);
  q.display();
}
