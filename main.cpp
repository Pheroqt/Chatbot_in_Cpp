#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to the Chatbot!" << endl;
    cout << "Created by Ferec Hamitbeyli" << endl;

    cout << "*******************************" << endl;
    cout << "*******************************" << endl;
    string name;
    string age;
    string job;
    string favourite_food;
    int quitting;
    while (true) {
    cout << "Hello. What is your name?" << endl;
    getline (cin,name);
    cout << "Nice to meet you, " << name << " !" << endl;
    cout << "How old are you?" << endl;
    getline (cin,age);
    cout << "Wow! You don't look like you are " << age << " years old. You look a lot younger!" << endl;
    cout << "What do you do for living?" << endl;
    getline (cin,job);
    cout << job <<" should be interesting!" << endl;
    cout << "What is your favorite food? Some kokorech would be awesome now!"<< endl;
    getline (cin,favourite_food);
    cout << "I don't think " << favourite_food << " is any better than kokorech that i was talking about but it is okay. By the way please don't ask about kokorech. It is a long story to talk about!"<< endl;
    cout << "Oh! I have to go now. Emergency call. It is nice to meet you!" << endl;

    cout << "*************************************" << endl;
    cout << "Do you want to start the program again? (Press 1 for Yes and 2 for No)" << endl;
    cin >> quitting;
    if (quitting == 1) {

    }
    else if (quitting == 2) {
        break;
    }
    else {
        cout << "Please enter a correct number, next time!" << endl;
        break;

    }
    }



    return 0;
}
