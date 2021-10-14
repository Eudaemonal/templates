#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <regex>
#include <unordered_map>

std::vector<std::string> split(std::string re, std::string str){
	std::regex e(re);
	std::vector<std::string> res;
	std::regex_token_iterator<std::string::iterator> iter(str.begin(), str.end(), e, -1);
	std::regex_token_iterator<std::string::iterator> end;
	for (;iter != end; iter++){
		res.push_back(*iter);
	}
	return res;
}


int f(std::vector<std::list<int>> g ) {
    int n = g.size();
    for(int i = 0; i < n; ++i){
        std::cout << i << ": ";
        for (int neighbor : g[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << "\n";
    }

    return 0;
}


int main(int argc, char *argv[]){
    int a, b, n;
    std::string s;
    std::cin >> n;
    
    std::vector<std::list<int>> g(n);
    for(int i = 0; i < n; ++i){
        std::cin >> s;
        for (std::string neighbor: split(",", s)) {
            g[i].push_back(stoi(neighbor));
        }
    }

    std::cout << f(g) << "\n";
    return 0;
}
