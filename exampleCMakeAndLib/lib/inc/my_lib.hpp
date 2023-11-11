
class FileOperations {
public:
    FileOperations(const std::string& filename);
    ~FileOperations();

    bool read(std::string& content);
    bool write(const std::string& content);

private:
    std::string filename;
};