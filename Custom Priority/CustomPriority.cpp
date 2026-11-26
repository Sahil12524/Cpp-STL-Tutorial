#include <print>
#include <vector>
#include <algorithm>
#include <queue>
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
		// criteria -> max marks -> high priority
		return a.marks < b.marks;
	}
};

int main() {
	//// max-heap
	//std::priority_queue<int> pq;

	//std::priority_queue<int, std::vector<int>, std::less<int>> pq2;

	//// min-heap
	//std::priority_queue<int, std::vector<int>, std::greater<int>> pq1;

	std::priority_queue<Student, std::vector<Student>, comparator> pq;


	pq.push(Student(90, "Sahil"));
	pq.push(Student(27, "Steffoobar"));
	pq.push(Student(99, "Santa"));
	pq.push(Student(82, "Nadu"));

	std::println("{} {}", pq.top().marks, pq.top().name);
	pq.pop();
	std::println("{} {}", pq.top().marks, pq.top().name);
	pq.pop();
	std::println("{} {}", pq.top().marks, pq.top().name);
	pq.pop();
	std::println("{} {}", pq.top().marks, pq.top().name);
	pq.pop();



	return 0;
}