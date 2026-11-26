#include <print>
#include <set>
#include <unordered_set>

int main() {

	// Ordered set
	std::set<int> st;

	st.insert(10);
	st.insert(15);
	st.insert(8);
	st.insert(4);

	//std::set<int>::iterator itr = st.begin();
	auto itr = st.begin();

	while (itr != st.end()) { std::print("{} ", *itr); ++itr; } std::println(); itr = st.begin();

	std::println("{}", st.find(155) != st.end() ? "Found" : "Not found");
	std::println("{}", st.find(15) != st.end() ? "Found" : "Not found");
	std::println("{}", st.find(4) != st.end() ? "Found" : "Not found");

	std::println("{}", st.size());
	st.clear();
	std::println("{}", st.size());

	st.erase(st.begin(), st.end());
	std::println("{}", st.size());

	std::println("Set is {}", st.empty() ? "empty" : "not empt");

	// Unordered set
	std::unordered_set<int> ust;

	ust.insert(10);
	ust.insert(15);
	ust.insert(8);
	ust.insert(4);

	auto itr1 = ust.begin();
	while (itr1 != ust.end()) { std::print("{} ", *itr1); ++itr1; } std::println(); itr1 = ust.begin();

	for (const auto& i : ust) { std::print("{} ", i); } std::println();

	std::println("{}", ust.count(15) ? "Found" : "Not found");
	std::println("{}", ust.count(105) ? "Found" : "Not found");
	std::println("{}", ust.count(8) ? "Found" : "Not found");

	return 0;
}