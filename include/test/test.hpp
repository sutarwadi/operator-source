#ifndef TEST_TEST_HPP
#define TEST_TEST_HPP

#include <cstdint>

namespace test::literals {
inline auto operator"" _KiB(long double a) -> std::uint64_t;
inline auto operator"" _MiB(long double a) -> std::uint64_t;
inline auto operator"" _GiB(long double a) -> std::uint64_t;
} // namespace test::literals

#endif // TEST_TEST_HPP
