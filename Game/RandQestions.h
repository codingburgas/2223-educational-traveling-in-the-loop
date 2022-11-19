int s;
int a;
int b;
using namespace std;
int randQestionsNumber1() {

    s = (rand() % 4) + 1;
    return s;

}
int randQestionsNumber2() {

    a = (rand() % 4) + 5;
    return a;

}
int randQestionsNumber3() {

    b = (rand() % 4) + 9;
    return b;

}

void Qestion(int p) {
    switch (p) {
    case 1: cout << "What is its size?" << endl;
        break;
    case 2: cout << "What is its population?" << endl;
        break;
    case 3: cout << "What is the climate?" << endl;
        break;
    case 4: cout << "What is this country most known for?" << endl;
    }

}
void Qestion1(int o) {

    switch (o) {
    case 5: cout << "What is the food culture?" << endl;
        break;
    case 6: cout << "Is it economically stable?" << endl;
        break;
    case 7: cout << "Does it border with a sea or ocean?" << endl;
        break;
    case 8: cout << "Which countries does it border?" << endl;
    }

}
void Qestion2(int u) {


    switch (u) {
    case 9: cout << "What is the main religion?" << endl;
        break;
    case 10: cout << "What type of government rules?" << endl;
        break;
    case 11: cout << "Is it a leading country in its continent?" << endl;
        break;
    case 12: cout << "Does it participate in global tournaments?" << endl;
    }

}
