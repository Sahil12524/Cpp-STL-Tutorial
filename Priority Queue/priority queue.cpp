#include <print>
#include <queue>

int main() {

	// max-heap
	std::priority_queue<int> pq;

	pq.push(10);
	pq.push(25);
	pq.push(55);
	pq.push(21);

	std::println("{}", pq.top());
	pq.pop();
	std::println("{}", pq.top());
	pq.pop();
	std::println("{}", pq.top());

	std::println("{}", pq.size());

	pq.empty() ? std::println("pq is empty") : std::println("pq is not empty");

	// min-heap
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq1;

	pq1.push(100);
	pq1.push(50);
	pq1.push(75);
	
	std::println("{}", pq1.top());
	pq1.pop();
	std::println("{}", pq1.top());

	return 0;
}