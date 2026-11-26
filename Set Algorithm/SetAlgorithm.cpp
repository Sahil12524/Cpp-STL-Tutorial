#include <print>
#include <vector>
#include <algorithm>

int main() {

	std::vector<int> first, second;

	first.push_back(1);
	first.push_back(2);
	first.push_back(3);
	first.push_back(4);

	second.push_back(3);
	second.push_back(4);
	second.push_back(5);
	second.push_back(6);

	std::vector<int> result, result1, result2, result3;

	std::set_union(first.begin(), first.end(), second.begin(), 
		second.end(), std::inserter(result, result.begin()));

	for (auto a : result) { std::print("{} ", a); } std::println();

	std::set_intersection(first.begin(), first.end(), second.begin(), 
		second.end(), std::inserter(result1, result1.begin()));

	for (auto a : result1) { std::print("{} ", a); } std::println();

	std::set_difference(first.begin(), first.end(), second.begin(), 
		second.end(), std::inserter(result2, result2.begin()));

	for (auto a : result2) { std::print("{} ", a); } std::println();

	std::set_symmetric_difference(first.begin(), first.end(), second.begin(),
		second.end(), std::inserter(result3, result3.begin()));

	for (auto a : result3) { std::print("{} ", a); } std::println();

	return 0;
}