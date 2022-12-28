#include <bits/stdc++.h>
#include "libcc.h"

using ostp::libcc::data_structures::DefaultTrie;
using ostp::libcc::utils::log_info;

int main()
{
    log_info("Hello, world!\n", "demo");

    DefaultTrie<char, const char *> trie("");
    trie.add("united states", 13, "us");
    trie.add("united kingdom", 14, "uk");
    trie.add("united arab emirates", 20, "uae");

    std::cout << "United States: " << trie.get("united states", 13) << std::endl;
    std::cout << "United Kingdom: " << trie.get("united kingdom", 14) << std::endl;
    std::cout << "United Arab Emirates: " << trie.get("united arab emirates", 20) << std::endl;
    std::cout << "Not in trie: " << trie.get("not in trie", 10) << std::endl;

    return 0;
}
