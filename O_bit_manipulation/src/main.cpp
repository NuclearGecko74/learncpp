#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    // Add a line of code to set the article as viewed.
	myArticleFlags |= option_viewed;

	// b) Add a line of code to check if the article was deleted.
	std::cout << std::boolalpha;
	std::cout << "Article deleted? " << static_cast<bool>(myArticleFlags & option_deleted) << '\n';

	// c) Add a line of code to clear the article as a favorite.
	myArticleFlags &= ~option_favorited;

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}