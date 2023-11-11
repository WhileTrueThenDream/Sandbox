#include <fcntl.h>
#include <iostream>
#include "my_lib.hpp"

int main() {
	
    FileOperations file{"example.txt"};

	if(file.write("hej, some content")){
	   std::cout << "Some content was written to the file" << std::endl;
	}
	   
	std::string content;	   
    if (file.read(content)) {
       std::cout << "File content: " << content.c_str() << std::endl;
    }


    return 0;
}