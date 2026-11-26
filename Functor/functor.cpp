#include <print>

class functorOne {
public:
	bool operator()(int a, int b) {

		// Descending order compare

		return a > b;
	}


};

int main() {

	functorOne cmp;

	std::println("10 is {}", cmp(10, 5) ? "greater than 5" : "less than 5");

	



	return 0;
}