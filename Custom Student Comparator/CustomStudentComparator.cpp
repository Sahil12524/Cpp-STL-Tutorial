#include <print>
#include <vector>
#include <algorithm>
#include <string>

class Student {
public:
	int marks;
	std::string name;

	Student() { /**/ }

	Student(int m, std::string n) {
		this->marks = m;
		this->name = n;
	}
};

class comparator {
public:
	bool operator()(Student a, Student b) {
		if (a.marks == b.marks) return a.name < b.name;
		return a.marks > b.marks;
	}
};

int main() {

	std::vector<Student> arr;
	arr.push_back(Student(90, "Sahil"));
	arr.push_back(Student(85, "Stefoobar"));
	arr.push_back(Student(90, "Santa"));

	std::sort(arr.begin(), arr.end(), comparator());

	for (auto a : arr) { std::println("{} {} ", a.marks, a.name); }

	return 0;
}