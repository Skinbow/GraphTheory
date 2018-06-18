#include <iostream>

//http://informatics.mccme.ru/mod/statements/view3.php?id=276&chapterid=258#1
void Chocolate() {
    int n;
    std::cin >> n;
    int m;
    std::cin >> m;
    int k;
    std::cin >> k;
    if (k > n*m) std::cout << "NO" << std::endl;
    else if (k % m == 0 || k % n == 0) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
    return;
}

int main() {
    Chocolate();
    return 0;
}
