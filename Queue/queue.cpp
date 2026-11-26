#include <print>
#include <queue>

int main() {

	std::queue<int> q, first, second;

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);

	std::println("{}", q.size());
	q.pop();
	std::println("{}", q.size());

	std::println("Front->{}\nBack->{}", q.front(), q.back());

	q.empty() ? std::println("Queue is empty") : std::println("Queue is not empty");

	first.push(10);
	first.push(20);

	second.push(100);
	second.push(200);

	first.swap(second);

	std::println("Front->{}\nBack->{}", first.front(), first.back());

	std::queue<int> temp = first;
	while (!temp.empty()) { std::print("{} ", temp.front()); temp.pop(); }

	return 0;
}