#include <print>
#include <vector>
#include <algorithm>

int main() {

	std::vector<int> vec{10, 20, 30, 40, 50};

	auto itr = std::max_element(vec.begin(), vec.end());
	std::println("{}", *itr);

	auto itr1 = std::min_element(vec.begin(), vec.end());
	std::println("{}", *itr1);

	int a = 10, b = 5;

	std::println("{}", std::min(a, b));
	std::println("{}", std::max(a, b));

	return 0;
}