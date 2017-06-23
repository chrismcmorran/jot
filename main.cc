#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
  if (argc == 1) {
    
    std::ifstream file_stream;
    file_stream.open("/tmp/.jot");
    for( std::string line; getline(file_stream, line );)
      {
	std::cout << line;
      }
    std::cout << std::endl;
    file_stream.close();
  } else {
    if (std::string(argv[1]) == "-h")
      {
	std::cout << "Usage: jot <string to jot down>" << std::endl;
	std::cout << "Specifying no argument will retrieve the last jotted item" << std::endl;
      } else
      {
	std::ofstream file_stream;
	file_stream.open("/tmp/.jot");
	file_stream << argv[1];
	file_stream.close();
      }
  }
  return 0;
}
