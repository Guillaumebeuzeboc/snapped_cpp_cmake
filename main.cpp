#include <iostream>
#include <string>

#include <boost/filesystem.hpp>
#include <boost/range/iterator_range.hpp>

int main(){
    const auto path = boost::filesystem::current_path();
    std::cout << "My C++ snaped app is launched from --> " << path << std::endl;
    std::cout << "Is snap/ a directory ? " << boost::filesystem::is_directory(path / "snap") << std::endl;
    if(is_regular_file(path / "main.cpp"))
	std::cout << "There is a main.cpp file" << std::endl;
    else
	std::cout << "No main.cpp file :(" << std::endl;

    return 0;
}
