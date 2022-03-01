#include <iostream>
#include <string>

#include <boost/filesystem.hpp>

int main(){
    std::cout << "My C++ snaped app is launched from --> " << boost::filesystem::current_path() << std::endl;
    const auto path = boost::filesystem::current_path() / "hello";
    auto ret = boost::filesystem::create_directory(path);
    if(!ret) {
        std::cout << "Failed to create directory" << std::endl;
        return -1;
    }
    std::cout << "Filesystem accessed!" << std::endl;
    ret = boost::filesystem::remove(path);
    if(!ret) {
        std::cout << "Failed to remove the directory" << std::endl;
        return -1;
    }
    return 0;
}