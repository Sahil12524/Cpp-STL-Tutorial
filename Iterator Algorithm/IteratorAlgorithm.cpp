#include <print>
#include <algorithm>
#include <vector>

void printDouble(int a) { std::print("{} ", 2 * a); }

bool checkEven(int a) { return a % 2 == 0; }

int main() {

	std::vector<int> arr(15);
	arr[0] = 10; arr[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50; arr[5] = 50;
	arr[6] = 50; arr[7] = 50; arr[8] = 50; arr[9] = 40; arr[10] = 42; arr[11] = 33;
	arr[12] = 64; arr[13] = 15; arr[14] = 79;

	std::for_each(arr.begin(), arr.end(), printDouble);
	auto target = 40;
	auto itr = std::find(arr.begin(), arr.end(), target);
	std::println("\n{}", *itr);


	auto itr1 = std::find_if(arr.begin(), arr.end(), checkEven);
	std::println("{}", *itr1);

	target = 50;
	int res = std::count(arr.begin(), arr.end(), target);
	std::println("{}", res);

	res = std::count_if(arr.begin(), arr.end(), checkEven);
	std::println("{}", res);

	std::vector<int> v = arr;
	std::sort(v.begin(), v.end());
	for (int a : v) std::print("{} ", a); std::println();

	v = arr;
	std::reverse(v.begin(), v.end());
	for (int a : v) std::print("{} ", a); std::println();

	v = arr;
	std::rotate(v.begin(), v.begin() + 3, v.end());
	for (int a : v) std::print("{} ", a); std::println();

	v = arr;
	std::rotate(v.begin(), v.end() - 4, v.end());
	for (int a : v) std::print("{} ", a); std::println();

	// proof that arr is untouched
	for (int a : arr) std::print("{} ", a); std::println();

	v = arr;
	auto itr2 = std::unique(v.begin(), v.end());
	v.erase(itr2, v.end());
	for (int a : v) { std::print("{} ", a); } std::println();
	// why 40 again? because 40 is not adjacent
	/*
	* 10 20 30 40 50 50 50 50 50 40 42 33 64 15 79
	*          ↑                 ↑
	* Because std::unique only removes consecutive duplicates
	* The fix: sort first, then unique
	*/

	v = arr;
	auto itr3 = std::partition(v.begin(), v.end(), checkEven);
	for (auto a : v) { std::print("{} ", a); } std::println();

	return 0;
}