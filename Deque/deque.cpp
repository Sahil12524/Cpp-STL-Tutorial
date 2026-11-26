#include <print>
#include <deque>

int main() {

	std::deque<int> dq;

	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(40);

	dq.push_front(100);
	dq.push_front(200);
	dq.push_front(300);

	dq.pop_front();

	dq.pop_back();

	std::println("{}", dq.size());
	std::println("{}", dq.front());
	std::println("{}", dq.back());

	dq.empty() ? std::println("Deque is empty.") : std::println("Deque is not empty.");

	std::deque<int>::iterator itr = dq.begin();
	while (itr != dq.end()) { std::print("{} ", *itr); itr++; } std::println();

	std::println("{}", dq[1]);
	std::println("{}", dq.at(2));

	std::println("{}", dq.size());
	dq.clear();
	std::println("{}", dq.size());

	dq.insert(dq.begin(), 101);
	std::println("{}", dq[0]);

	std::println("{}", dq.size());
	dq.erase(dq.begin(), dq.end());
	std::println("{}", dq.size());

	return 0;
}