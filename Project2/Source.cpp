#include <iostream>
#include <time.h>
#include<vector>

void print(std::vector<int> arr, const int size) {
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    const int size = 5;
    std::vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    print(arr, size);

    std::cout << arr.size() << '\n';

    arr.pop_back();
    print(arr, size-1);

    arr.push_back(rand() % 100 + 1);
    arr.insert(std::begin(arr), rand() % 100 + 1);
    print(arr, size+1);

    return 0;
}