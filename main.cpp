#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& vec) {
    int n = vec.size();
    
    for (int i = 1; i < n; ++i) {
        int key = vec[i];
        int j = i - 1;

        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            --j;
        }
        
        vec[j + 1] = key;
    }
}

int main() {
    std::vector<int> vec = {64, 34, 25, 12, 22, 11, 90};  
    insertionSort(vec);
    std::cout << "Sorted vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
 
