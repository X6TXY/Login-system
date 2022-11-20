#include <bits/stdc++.h>

using namespace std;

bool isloggedin(){
    string usname,password,un ,pw;

    cout << "Enter username: "; cin >> usname;
    cout << "Enter password: "; cin >> password;

    ifstream read("data\\" + usname +".txt");
    getline(read,un);
    getline(read,pw);
    if(un == usname and pw==password){
        return true;
    }
    else return false;

}

int main(){
    int choice;
    cout << "1: Register\n2: Login\nYour choice: "; cin >> choice;
    if(choice ==1){
        string usname,password;
        cout << "Select a username: "; cin >> usname;
        cout << "Select a password: "; cin >> password;

        ofstream file;
        file.open("data\\" + usname + ".txt");
        file << usname << '\n' << password;
        file.close();

        main();

    }
    else if(choice==2){
        bool status=isloggedin();
        if(!status){
            cout << "False Login!" <<  '\n';
            system("PAUSE");
            return 0;
        }
        else {
            cout << "Succesfully logged in!" << '\n';
            system("PAUSE");
            return 1;
        }
    }
}