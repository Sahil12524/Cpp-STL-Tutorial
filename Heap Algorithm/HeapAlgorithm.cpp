#include <print>
#include <vector>
#include <algorithm>

int main() {

	std::vector<int> arr{22, 11, 55, 66, 77};

	std::make_heap(arr.begin(), arr.end());

	for (auto i : arr) { std::print("{} ", i); } std::println();

	arr.push_back(99);

	for (auto i : arr) { std::print("{} ", i); } std::println();

	std::push_heap(arr.begin(), arr.end());

	for (auto i : arr) { std::print("{} ", i); } std::println();

	std::pop_heap(arr.begin(), arr.end());

	for (auto i : arr) { std::print("{} ", i); } std::println();

	arr.pop_back();

	for (auto i : arr) { std::print("{} ", i); } std::println();

	std::sort_heap(arr.begin(), arr.end());

	for (auto i : arr) { std::print("{} ", i); } std::println();

	return 0;
}