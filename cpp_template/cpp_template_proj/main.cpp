#include <iostream>
#include <string>
#include <boost/program_options.hpp>



int main(int argc, char *argv[]){
    try{
        std::vector<std::string> filenames;
        namespace po = boost::program_options;

        po::options_description description("Display discription");

        description.add_options()
            ("filenames,f", po::value<std::vector<std::string>>(&filenames)->multitoken(), "Input filenames")
            ("help,h", "Display this help message");
        
        po::variables_map vm;
        po::store(po::command_line_parser(argc, argv).options(description).run(), vm);
        po::notify(vm);


        if(vm.count("help")){
            std::cout << description;
        }

        if (vm.count("filenames")) {
            for(auto filename: filenames){
                std::cout << "* " << filename << "\n";
                
            }
        } 

        
        return EXIT_SUCCESS;
    }catch(std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}