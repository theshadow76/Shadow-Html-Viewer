#include <iostream>
#include <fstream>

class opener
{
    private:
        /* data */
    public:
        opener(/* args */);
        ~opener();
        std::fstream file;
        std::string path;
        std::string filedata;
    };

    opener::opener(/* args */)
    {
        std::cin >> path;
        file.open(path, std::ios::in);
        if (!file) {
            std::cout << "File opened with errors" << std::endl;
        }
        else {
            file >> filedata;
        }
        file.close();
        std::cout << filedata << std::endl;
    }

    opener::~opener()
    {
}
