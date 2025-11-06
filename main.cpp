#include <iostream>
#include <random>

using namespace std;

int main() {
 random_device rd;
 mt19937 gen(rd());
 uniform_int_distribution<int> dist(1, 100);
int input_number;
int Number = dist(gen);
while (true) {
    cout<<"Введите число:";
    cin>>input_number;
    if (input_number > Number) {
        cout<<"Слишком много!"<<endl;
    }
    else if (input_number < Number) {
        cout<<"Слишком мало!"<<endl;
    }
    else if (input_number == Number) {
        cout<<"Ты угадал!";
         break;
    }
}
    return 0;
}