#include <print>
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

class StudentComparator {
public:
	bool operator()(Student a, Student b) {
		return a.marks < b.marks;
	}
};

int main() {

	Student s1(93, "Sahil");
	Student s2(97, "Steffoobar"); // Shh! top secret :(

	StudentComparator cmp;

	std::println("{}", cmp(s1, s2) ? "Sahil ke marks Steffoobar se kam hain" : "Stefoobar ke marks Sahil se kam hain");

	return 0;
}