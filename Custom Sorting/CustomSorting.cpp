#include <print>
#include <vector>
#include <algorithm>

class comparator {
public:
	bool operator()(int a, int b) {
		return a > b;
	}
};

int main() {

	std::vector<int> arr;
	arr.push_back(20);
	arr.push_back(10);
	arr.push_back(15);

	// ascending order
	std::sort(arr.begin(), arr.end());
	for (auto a : arr) { std::print("{} ", a); } std::println();

	// descending order
	std::sort(arr.begin(), arr.end(), comparator());
	for (auto a : arr) { std::print("{} ", a); } std::println();

	return 0;
}