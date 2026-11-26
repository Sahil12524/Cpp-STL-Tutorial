#include <print>
#include <vector>

int main() {

	std::vector<int> marks;
	std::vector<int> miles(10);
	std::vector<int> distances(15, 0);

	marks.reserve(10);

	std::println("marks.max_size(): {}", marks.max_size());

	marks.push_back(10);
	marks.push_back(20);
	marks.push_back(30);
	marks.push_back(40);

	std::println("marks.capacity(): {}", marks.capacity());

	std::println("marks.size(): {}", marks.size());

	marks.empty() ? std::println("marks is empty") : std::println("marks is not empty");

	marks[0] = 10000;

	std::println("marks.at(0): {}", marks.at(0));

	std::println("marks[0]: {}", marks[0]);

	marks.pop_back();

	std::println("Marks size after pop_back(): {}", marks.size());

	marks.push_back(40);
	marks.push_back(50);

	std::println("Marks size after push_back(): {}", marks.size());

	std::println("marks.front(): {}", marks.front());
	std::println("marks.back(): {}", marks.back());

	marks.insert(marks.begin(), 9);

	std::println("Marks size after marks.insert(marks.begin(), 9): {}", marks.size());

	std::println("{}", *(marks.begin()));

	for (auto i : distances) std::print("{} ", i); std::println();

	for (auto i : marks) std::print("{} ", i); std::println();

	distances.swap(marks);

	std::print("Elements of distances after distances.swap(marks): ");
	for (auto i : distances) std::print("{} ", i); std::println();

	std::print("distances traversing using iterator: ");
	std::vector<int>::iterator itr = distances.begin();
	while (itr != distances.end()) { std::print("{} ", *itr); itr++; } std::println();

	marks.erase(marks.begin(), marks.end());
	std::println("Marks size after marks.erase(marks.begin(), marks.end()): {}", marks.size()); // full vector erase as per range

	marks.clear(); // full vector clear no range required

	std::print("elements after erase() and clear(): ");
	for (auto i : marks) std::print("{} ", i); std::println();

	// 2D vector
	std::vector<std::vector<int>> arr(5, std::vector<int>(4,0)); // 5 rows, 4 columns, 0 fill
	int totalRows = arr.size(), totalColumns = arr[0].size(); // only for even number of rows and colums

	std::vector<std::vector<int>> brr(4); // 4 rows

	brr[0] = std::vector<int>(4); // 4 columns at pos 0
	brr[1] = std::vector<int>(2); // 2 columns at pos 1
	brr[2] = std::vector<int>(5); // 5 columns at pos 2
	brr[3] = std::vector<int>(3); // 3 columns at pos 3

	int totalRowCnt = brr.size();
	//int totalColumnCnt = brr[x].size();

	return 0;
}