#include "string.h"

String::String(const char* str) {
	std::cout << "String: Using normal CTOR" << std::endl;
	size = 0;
	// traversal over the string to find its size
	// a temoprary pointer which will allow us to traverse the string without losing its beggining (held by 'str')
	for (const char *t = str ; *t != '\0'; t++) {
		size++;
	}
	start = new char[size+1];
	for (int i = 0; i< size; i++) {
		start[i] = str[i]; // str[i] = *(str + i*sizeof(char))
	}
	start[size] = '\0';
}

String::String(const String& o) {
	std::cout << "String: Using copy CTOR" << std::endl;
	size = o.size; // accessing a private member is allowed because we write code that is part of the class
	start = new char[size+1];
	for (int i = 0; i< size; i++) {
		start[i] = o.start[i]; 
	}
	start[size] = '\0'; // at the end of the array of chars add null char '\0' that is a 0
}

String& String::operator=(const String& o) {
	/* default operator= is like:
	 * size = o.size;
	 * start = o.start;
	 */
	std::cout << "String: Using operator=" << std::endl;
	size = o.size; // accessing a private member is allowed because we write code that is part of the class
	start = new char[size+1];
	for (int i = 0; i< size; i++) {
		start[i] = o.start[i]; 
	}
	start[size] = '\0';
}


int String::length() {
	return size;
}

char String::charAt(int index) {
	// we can first do input check to make sure 0 <= index <= size - 1
	if (0 <= index <= ){

	}
	// and throw exceptions otherwise
	return start[index];
}

int String::compareTo(String anotherString){
	// 2 options
	// 1. size is different
	if (size !== anotherString.size){
		std::cout << "Strings are diferent lengths" << std::endl;
		std::cout << "given string size= " << anotherString.size << std::endl;
		std::cout << "target string size= " << anotherString.size << std::endl;
		return 0;
	}
	// 2. char in index is different
	for (const char *t = anotherString.start; *t != '\0'; t++) {
		if (*t == '\0'){
			return 1;
		}
	}
}

