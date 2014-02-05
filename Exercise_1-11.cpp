#include <iostream>
int main(){
	int sum, val1, val2, low, high;

	std::cout << "Please enter two numbers: " << std::endl;
	std::cin >> val1 >> val2;

	if (val1 <= val2){
		low = val1;
		high = val2;
	}
	else {
		low = val2;
		high = val1;
	}
	while (low <= high) {
		sum += low;
		++low;
	}
	std::cout << "Sum of " << val1 << " to " << val2 <<" inclusive is: " << sum << std::endl;
	return 0;
}