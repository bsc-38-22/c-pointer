# include <iostream>

using namespace std;

int main (){

    int* value = new int;

    cout << "Enter a value: " <<endl;

    cin >> *value;

    delete [] value;

    if (value != nullptr){
        cout << "The value is dynamically allocated" << endl;
    }else{
        cout << "The value is not dynamically allocated " <<endl;
    }

    char* character = new char;

    cout << "Enter a character: " <<endl;

    cin >> *character ;

    if (character != nullptr){
        cout << ("The character is dynamicallly allocated: ");
    }else {
        cout << ("The character is not dynamically allocated");

        return 0;
    }


    


}

