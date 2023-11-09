#include <iostream>

int simple_string_hash(std::string word, int p, int n){
    long long size = static_cast<int>(word[0]);

    for(int i = 1; i < word.length(); i++){
        size += static_cast<int>(word[i]) * pow(p, i);

    }
    return size % n;
}

int main() {
    int p, n;
    std::string word;
    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите n: ";
    std::cin >> n;

    while (true) {
        std::cout << "Введите строку: ";
        std::cin >> word;
        std::cout << "Наивный хэш строки " << word << " = " << simple_string_hash(word,p,n) << "\n";
        if(word == "exit") break;
        //break;
    }
    return 0;
}