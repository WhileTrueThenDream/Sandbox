#ifndef FILE_OPS_H
#define FILE_OPS_H

class FileOperations {
public:
    FileOperations(const std::string& filename);
    ~FileOperations();

    bool read(std::string& content);
    bool write(const std::string& content);

private:
    std::string filename;
};

#endif