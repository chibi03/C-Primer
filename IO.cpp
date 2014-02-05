// Section 1.2 Input Output
/*
 There are two main objects to use for IO *cin* for standart input and 
 *cout* for standart output.
 
*/

#include <iostream> //includes the iostream library the name in '<>' refers to a header
int main(){
	std::cout << "Enter two numbers:" << std::endl; //endl is a special value called a "manipulator", it ends the current line and flushes the buffer
	int v1 = 0, v2 = 0; 
	std::cin >> v1 >> v2; //the namespace 'std' refers to the standard library and avoids collisions
	std::cout << "The sum of " << v1 << " and " << v2 <<
		" is " << v1 + v2 << std::endl;
	return 0;
}
