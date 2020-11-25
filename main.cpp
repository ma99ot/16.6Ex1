#include <iostream>
#include <vector>

void printVector (std::vector<int> printed){
    for (int i = 0; i < printed.size(); i++) {
        std::cout << printed[i] << " ";
    }
}

std::vector<int> removeNumber(std::vector<int> numbers, int remove) {
    std::vector<int> result;
    for (int i = 0; i < numbers.size(); i++){
        if (numbers[i] != remove) result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    int numbersToAdd;
    std::cout << "Please, input count of numbers" <<  std::endl;
    std::cin >> numbersToAdd;
    std::cout << "Please, input "<< numbersToAdd << " numbers" <<  std::endl;
    std::vector<int> numbers;
    for (int i = 0; i < numbersToAdd; i++){
        int insertedNumber;
        std::cin >> insertedNumber;
        numbers.push_back(insertedNumber);
    }
    int numberToRemove;
    std::cout << "Please, input number you want to remove:" <<  std::endl;
    std::cin >> numberToRemove;
    printVector(removeNumber(numbers, numberToRemove));
    return 0;
}
