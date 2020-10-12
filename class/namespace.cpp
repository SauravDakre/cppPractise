#include <cstdio>
#include <string>

namespace bw {
const std::string prefix = "{bw::string} ";

class string {
  std::string _s = "";
  string();

public:
  string(const std::string &s) : _s(prefix + s) {}
  const char *c_str() { return _s.c_str(); }
  operator std::string &() { return _s; }
  operator const char *() const { return _s.c_str(); }
};
};

int main() {
  const std::string s1("this is string");
  std::puts(s1.c_str());

  const bw::string s2("another string");
  std::puts(s2);

  return 0;
}
