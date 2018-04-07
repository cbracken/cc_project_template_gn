#include <iostream>

#include "foo.h"
#include "bar.h"

int main(int argc, char** argv) {
  for (auto i = 0; i < argc; ++i)
    std::cout << "argv[" << i << "]: " << argv[i] << std::endl;

  auto x = Foo(3);
  auto y = Bar(x);
  std::cout << "x=" << x << ",y=" << y << std::endl;
}
