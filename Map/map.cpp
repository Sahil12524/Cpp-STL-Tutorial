#include <print>
#include <map>
#include <unordered_map>
#include <string>

int main() {

	// unordered map

	/*
	* unsorted but fastest
	*/

	std::unordered_map<std::string, std::string> table;
	table["in"] = "India";
	table.insert(std::make_pair("en", "England"));

	std::pair<std::string, std::string> p;
	p.first = "br";
	p.second = "brazil";
	table.insert(p);

	std::println("{}", table.at("in"));
	table.at("in") = "Indonesia";
	std::println("{}", table.at("in"));
	table["in"] = "India";
	std::println("{}", table.at("in"));

	std::unordered_map<std::string, std::string>::iterator itr = table.begin();
	/*
	* use auto
	* auto itr = table.begin();   // same type, deduced — the good way
	*/
	while (itr != table.end()) { std::print("{} ", *itr); ++itr; } std::println(); itr = table.begin();
	while (itr != table.end()) { std::pair<std::string, std::string> p = *itr; std::print("[{} {}] ", p.first, p.second); itr++; } std::println(); itr = table.begin();
	for (auto itr = table.begin(); itr != table.end(); ++itr) std::print("[{} {}] ", itr->first, itr->second); std::println();
	for (const auto& [code, country] : table) std::print("[{} {}] ", code, country); std::println();

	std::println("Key {}", table.find("in") != table.end() ? "found" : "not found");

	std::println("Key {}", table.count("in") ? "found" : "not found");

	// use contains() or find() better than count()


	std::println("{}", table.size());
	table.clear();
	std::println("{}", table.size());

	std::println("{}", table.size());
	table.erase(table.begin(), table.end());
	std::println("{}", table.size());


	std::println("table is {}", table.empty() ? "empty" : "not empty");

	// ordered map

	/*
	* sorted but slower
	*/

	std::map<std::string, std::string> table1;
	std::map<int, std::string> table2;

	table1["in"] = "India";
	table1.insert(std::make_pair("en", "England"));

	std::pair<std::string, std::string> p1;
	p1.first = "br";
	p1.second = "brazil";
	table1.insert(p1);

	std::println("{}", table1.at("in"));
	table1.at("in") = "Indonesia";
	std::println("{}", table1.at("in"));
	table1["in"] = "India";
	std::println("{}", table1.at("in"));

	for (const auto& [code, country] : table1) std::print("[{} {}] ", code, country); std::println();
	auto itr1 = table1.begin();
	while (itr1 != table1.end()) { std::print("[{} {}] ", itr1->first, itr1->second); ++itr1; } std::println(); itr1 = table1.begin();
	while (itr1 != table1.end()) { std::print("{} ", *itr1); ++itr1; } std::println(); itr1 = table1.begin();

	// demonstration that order doesn't matters it will sort it anyway :P
	table2.insert(std::make_pair(1, "Sahil"));
	table2.insert(std::make_pair(3, "Santa"));
	table2.insert(std::make_pair(2, "Steffoobar")); // unknown person.

	for (const auto& [key, value] : table2) std::print("[{} {}] ", key, value); std::println();
	auto itr2 = table2.begin();
	while (itr2 != table2.end()) { std::print("{} ", *itr2); ++itr2; } std::println(); itr2 = table2.begin();

	return 0;
}