#include <cstdlib>
#include <test/test.hpp>

using namespace test::literals;

int main()
{
  auto const a = 1.0_KiB;
  if (a == 1024) {
    return EXIT_SUCCESS;
  } else {
    return EXIT_FAILURE;
  }
}
