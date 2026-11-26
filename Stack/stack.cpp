#include <print>
#include <stack>

int main() {

	std::stack<int> st, first, second;

	st.push(10);
	st.push(20);
	st.push(30);

	std::println("{}", st.size());
	st.pop();
	std::println("{}", st.size());

	std::println("{}", st.top());
	st.pop();
	std::println("{}", st.top());

	std::println("{}", st.size());

	st.empty() ? std::println("Stack is empty") : std::println("Stack is not empty");

	first.push(10);
	first.push(20);
	first.push(30);

	second.push(100);
	second.push(200);
	second.push(300);

	first.swap(second);
	std::println("{}", first.top());

	std::stack<int> temp = first;
	while (!temp.empty()) { std::print("{} ", temp.top()); temp.pop(); }

	return 0;
}