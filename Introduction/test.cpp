#include <array>
#include <iostream>
#include <string_view>
#include <tuple>
#include <type_traits>

namespace a::b::c
{
    inline constexpr std::string_view str{"hello"};
}

template <class... T>
std::tuple<std::size_t, std::common_type_t<T...>> sum(T... args)
{
    return {sizeof...(T), (args + ...)};
}

int main()
{
    auto [iNumbers, iSum]{sum(1, 2, 3)};
    std::cout << a::b::c::str << ' ' << iNumbers << ' ' << iSum << '\n';

    std::array arr{1, 2, 3};

    std::cout << std::size(arr) << '\n';

    int uninitialized;
    std::cout << "Value of uninitialized: " << uninitialized << std::endl;
    std::cout << "Value of operation on uninitialized: " << uninitialized + 2 << std::endl;

    int directInitialization[]{5, 25};
    for (int i = 0; i < 2; i++)
    {
        std::cout << directInitialization[i] << std::endl;
    }
    int directzBraceInitilaization{4};
    return 0;
}