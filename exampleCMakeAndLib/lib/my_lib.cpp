#include <iostream>
#include <string>
#include <fcntl.h>
#include <unistd.h>
#include "my_lib.hpp"

FileOperations::FileOperations(const std::string& filename) : filename(filename) {
 int fd = ::open(filename.c_str(),  O_RDWR | O_CREAT, 0666);
 if(fd == -1){
    std::cout << "File could not be openend/created " << std::endl;
 }
 close(fd);
}

FileOperations::~FileOperations() {
}


bool FileOperations::read(std::string& content) {
 int fd = ::open(filename.c_str(),  O_RDONLY, 0666);
    if (fd != -1) {
        char buffer[1024];
		ssize_t bytesRead = ::read(fd, buffer, sizeof(buffer));
		close(fd);
        if (bytesRead == 0) {
          std::cout << "File empty/could not be read " << std::endl;
		  return false;
        }
		content = buffer;
        return true;
    }
    return false;
}

bool FileOperations::write(const std::string& content) {
  int fd = ::open(filename.c_str(),  O_WRONLY, 0666);
    if (fd != -1) {
        ssize_t bytesWritten = ::write(fd, content.c_str(), content.size());
		close(fd);
        if (bytesWritten <= 0){
          std::cout << "No content written to file" << std::endl;
	      return false;
		}
		return true;
    }
    return false;
}
