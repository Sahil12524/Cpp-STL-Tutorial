#include <print>
#include <algorithm>
#include <numeric>
#include <vector>

int main() {

	std::vector<int> arr(5);
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	std::vector<int> first;
	first.push_back(1);
	first.push_back(2);
	first.push_back(3);
	first.push_back(4);

	std::vector<int> second;
	second.push_back(3);
	second.push_back(4);
	second.push_back(5);
	second.push_back(6);

	// third paramater ctls the with how much to add like 100+accumulated, or x+accumulated aka initial value
	int totalSum = std::accumulate(arr.begin(), arr.end(), 0); 
	std::println("{}", totalSum);
	
	/*
	*	1   2   3    4  (first)
	*	*   *   *    *
	*	3   4   5    6  (second)
	* =
	*	3 + 8 + 15 + 24 = 50
	*/
	int res = std::inner_product(first.begin(), first.end(), second.begin(), 0);
	std::println("{}", res);

	// 1, 1+2, 1+2+3, 1+2+3+4
	std::vector<int> result(first.size());
	std::partial_sum(first.begin(), first.end(), result.begin());
	for (auto i : result) { std::print("{} ", i); } std::println();

	// fills the vector from 251 ... 255, used for filling numeric series.
	std::vector<int> iotaFill(5);
	std::iota(iotaFill.begin(), iotaFill.end(), 251);
	for (auto i : iotaFill) { std::print("{} ", i); } std::println();

	return 0;
}