#include <print>
#include <vector>
#include <forward_list>
#include <list>


int main() {

	std::vector<int> arr;

	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);

	//std::vector<int>::iterator itr = arr.begin();
	auto itr = arr.begin();

	while (itr != arr.end()) { std::print("{} ", *itr); ++itr; } std::println();

	for (itr = arr.begin(); itr != arr.end(); ++itr) { std::print("{} ", *itr); } std::println();

	// Forward Iterator

	std::forward_list<int> list;

	list.push_front(10);
	list.push_front(20);
	list.push_front(30);

	//std::forward_list<int>::iterator itr1 = list.begin();
	auto itr1 = list.begin();
	while (itr1 != list.end()) { std::print("{} ", *itr1); ++itr1; } std::println(); itr1 = list.begin();
	while (itr1 != list.end()) { std::print("{} ", *(itr1) = *(itr1) + 5); ++itr1; } std::println(); itr1 = list.begin();

	// Bi-directional Iterator
	std::list<int> list1;
	list1.push_back(10);
	list1.push_back(20);
	list1.push_back(30);

	//std::list<int>::iterator itr2 = list1.begin();
	auto itr2 = list1.begin();

	// Forward iterator + writ operation
	while (itr2 != list1.end()) { *(itr2) = *(itr2) + 2; std::print("{} ", *itr2); ++itr2; } itr2 = list1.begin(); std::println();

	// Backward interator + writ operation
	itr2 = list1.end();
	while (itr2 != list1.begin()) { --itr2; *(itr2) = *(itr2) + 5; std::print("{} ", *itr2); } itr2 = list1.begin(); std::println();

	// Random aceess iterator
	std::vector<int> arr1 = {10,20,30,40,50};

	//std::vector<int> ::iterator itr3 = arr1.begin();
	auto itr3 = arr1.begin();
	while (itr3 != arr1.end()) { *(itr3) = *(itr3) + 7; std::print("{} ", *itr3); ++itr3; } itr3 = arr1.begin(); std::println();
	itr3 = arr1.end();
	while (itr3 != arr1.begin()) { --itr3; *(itr3) = *(itr3) - 7; std::print("{} ", *itr3); } itr3 = arr1.begin(); std::println();

	//std::vector<int>::iterator itr4 = arr.begin() + 3;
	auto itr4 = arr1.begin() + 3;
	std::println("{}", *itr4);

	return 0;
}