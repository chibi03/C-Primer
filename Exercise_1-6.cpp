/*
 * Exercise 1.6: Explain whether the following program fragment is legal.
 * std::cout << "The sum of " << v1;
 * << " and " << v2;
 * << " is " << v1 + v2 << std::endl;
 * If the program is legal, what does it do ? If the program is not legal, why not ? How would you fix it ?
*/
/*
 * Answer:
 *	This code snipped is not legal as it doesn't pass the strings into and object
 *	using the lefthand operand.
 *	To fix it I would rewrite the code like this:
 *
 *		std::cout << "The sum of " << v1;
 *		std::cout << " and " << v2;
 *		std::cout << " is " << v1 + v2 << std::endl;
 */