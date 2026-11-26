#include <print>
#include <list>

int main() {

	std::list<int> myList, first, second;

	myList.push_back(10);
	myList.push_back(20);
	myList.push_back(30);
	myList.push_back(40);

	myList.push_front(100);

	myList.pop_back();

	myList.pop_front();

	myList.push_back(10);

	std::list<int>::iterator itr = myList.begin();
	std::print("before removing: ");
	while (itr != myList.end()) { std::print("{} ", *itr); itr++; } std::println();

	myList.remove(10);

	std::list<int>::iterator itr1 = myList.begin();
	std::print("after removing: ");
	while (itr1 != myList.end()) { std::print("{} ", *itr1); itr1++; } std::println();

	std::println("{}", myList.size());

	std::println("{}", myList.front());
	std::println("{}", myList.back());

	myList.clear();

	std::println("{}", myList.size());

	myList.empty() ? std::println("myList is empty") : std::println("myList is not empty");

	first.push_back(10);
	first.push_back(20);
	first.push_back(30);

	first.insert(first.begin(), 100);

	second.push_back(100);
	second.push_back(200);
	second.push_back(300);

	std::list<int>::iterator itr2 = first.begin();
	std::print("before swap: ");
	while (itr2 != first.end()) { std::print("{} ", *itr2); itr2++; } std::println();

	first.swap(second);

	std::list<int>::iterator itr3 = first.begin();
	std::print("after swap: ");
	while (itr3 != first.end()) { std::print("{} ", *itr3); itr3++; } std::println();

	std::println("size of first list before erase: {}", first.size());
	first.erase(first.begin(), first.end());
	std::println("size of first list after erase: {}", first.size());


	return 0;
}