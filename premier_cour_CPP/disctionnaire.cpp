#include <iostream>
#include <map>

/*peut etre remplacer par using namespace std;*/
using std::cout; using std::cin;
using std::endl; using std::map;
using std::string; 

int main(){
    std::map<string, string> m1 = {{"h", "htop"},
                                   {"k", "ktop"},
                                   {"t", "ttop"},
                                   {"r", "rtop"},
                                   {"w", "wtop"},
                                   {"p", "ptop"},};

    string key = "h";

    auto item = m1.find(key);
    if (item != m1.end()) {
        cout << "Key exists!  -  {" <<
            item->first << ";" << item->second << "}\n";
    } else {
        cout << "Key does not exist!" << endl;
    }

    return EXIT_SUCCESS;
}
