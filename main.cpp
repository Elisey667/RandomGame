#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);
int input_number;
int Number = dist(gen);
int lang;
cout<<"Choose a language:"<<endl;
cout<<"1. Russian"<<endl;
cout<<"2. English"<<endl;
cin>>lang;
if (lang == 1){
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
}
else if(lang == 2){
    while (true) {
    cout<<"Enter a number:";
    cin>>input_number;
    if (input_number > Number) {
        cout<<"Too much!"<<endl;
    }
    else if (input_number < Number) {
        cout<<"Too little!"<<endl;
    }
    else if (input_number == Number) {
        cout<<"you guessed it!";
         break;
    }
}
}
    return 0;
}