#include <iostream>

using namespace std;

int main()
{

    cout << "Lydia's application" << endl;
    int i = 1;

    cout << "1. Lydia is a nerd" << endl;
    cout << "2. Lydia is a geek" << endl;
    cout << "3. Lydia is out of here" << endl;
        do {
        char input;
        cin>>input;
        if(input == 49){
            cout << "Lydia is such a Nerd" << endl;
        }
        if(input == 50){
            cout << "Lydia is such a Geek" << endl;
        }
        if(input == 51){
            cout << "Cya nerds" << endl;
            return 0;
        }
    }while (i > 0);
}
