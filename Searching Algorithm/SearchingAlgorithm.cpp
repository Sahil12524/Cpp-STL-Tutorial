#include <print>
#include <algorithm>
#include <vector>

int main() {

	std::vector<int> arr;

	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);
	arr.push_back(50);

	// All four algorithms below assume arr is sorted ascending.
	// On an unsorted range they silently return wrong answers (binary_search may UB).
	// None of them modify the range — arr is untouched.

	int target = 40;
	auto itr = std::binary_search(arr.begin(), arr.end(), target); // Returns bool 1 if found
	std::println("Target {}", itr ? "found" : "not found");

	/*
	* Returns 40 as 35 was not found, but 40 > 35 so it returned the next bigger number.
	* If the number 35 was present it would have returned 35 instead.
	* lower_bound = first element >= value
	*/
	auto itr1 = std::lower_bound(arr.begin(), arr.end(), 35);
	std::println("{}", *itr1);

	/*
	* Returns 40, doesn't matter if 35 is present or not.
	* upper_bound = first element > value
	* For an absent value both bounds land on the same spot — that's why this is also 40.
	*/
	auto itr2 = std::upper_bound(arr.begin(), arr.end(), 35);
	std::println("{}", *itr2);

	// equal_range returns pair<iterator, iterator> — the [first, last] sub-range
	// of elements equal to the value. It's lower_bound + upper_bound in one call.
	// *last is one-past the match — never dereference it; use last - first for count.

	// value present
	auto [first, last] = std::equal_range(arr.begin(), arr.end(), 10);
	if (first != last)
		std::println("10 -> found {} x{}", *first, last - first);   // 10 x1
	else
		std::println("10 -> not found");

	// value absent → first == last, count 0
	auto [f, l] = std::equal_range(arr.begin(), arr.end(), 35);
	std::println("35 -> count = {}, first == last: {}", l - f, f == l);

	// equal_range's real payoff is duplicates — needs a range with repeats.
	// Separate vector so arr (and the outputs above) stay exactly as documented.
	std::vector<int> dups;
	dups.push_back(10);
	dups.push_back(20);
	dups.push_back(20);
	dups.push_back(20);
	dups.push_back(30);

	auto [d_first, d_last] = std::equal_range(dups.begin(), dups.end(), 20);
	std::println("20 in dups -> {} x{}", *d_first, d_last - d_first);   // 20 x3
	std::println("  lower_bound index = {}, upper_bound index = {}", 
		std::distance(dups.begin(), d_first), 
		std::distance(dups.begin(), d_last)
	);                          // 1, 4

	return 0;
}