#include <cmath>
#include <test/test.hpp>

namespace test::literals {
auto operator"" _KiB(long double a) -> std::uint64_t
{
  return static_cast<std::uint64_t>(std::pow(2, 10) * static_cast<double>(a));
}

auto operator"" _MiB(long double a) -> std::uint64_t
{
  return static_cast<std::uint64_t>(std::pow(2, 20) * static_cast<double>(a));
}

auto operator"" _GiB(long double a) -> std::uint64_t
{
  return static_cast<std::uint64_t>(std::pow(2, 30) * static_cast<double>(a));
}
} // namespace test::literals
