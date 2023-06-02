
//#include <iostream>
//using namespace std;
//
//int main() {
//    int day;
//
//    cout << "Enter the day number 1-7 ";
//    cin >> day;
//
//    if (day == 1) {
//        cout << "Monday" << endl;
//    }
//    else if (day == 2) {
//        cout << "Tuesday" << endl;
//    }
//    else if (day == 3) {
//        cout << "Wednesday" << endl;
//    }
//    else if (day == 4) {
//        cout << "Thursday" << endl;
//    }
//    else if (day == 5) {
//        cout << "Friday" << endl;
//    }
//    else if (day == 6) {
//        cout << "Saturday" << endl;
//    }
//    else if (day == 7) {
//        cout << "Sunday" << endl;
//    }
//    else {
//        cout << "Invalid day number" << endl;
//    }
//
//    switch (day) {
//    case 1:
//        cout << "Monday" << endl;
//        break;
//    case 2:
//        cout << "Tuesday" << endl;
//        break;
//    case 3:
//        cout << "Wednesday" << endl;
//        break;
//    case 4:
//        cout << "Thursday" << endl;
//        break;
//    case 5:
//        cout << "Friday" << endl;
//        break;
//    case 6:
//        cout << "Saturday" << endl;
//        break;
//    case 7:
//        cout << "Sunday" << endl;
//        break;
//    default:
//        cout << "Invalid day number" << endl;
//        break;
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int score = 0; 

    
    cout << "1. Who won the Oscar in 2022?" << endl;
    cout << "   a) Will Smith" << endl;
    cout << "   b) Chadwick Boseman" << endl;
    cout << "   c) Frances McDormand" << endl;
    cout << "   Your answer: ";
    char answer1;
    cin >> answer1;

    if (answer1 == 'a' || answer1 == 'A') {
        cout << "   Correct!" << endl;
        score++;
    }
    else {
        cout << "   Wrong answer. Game over!" << endl;
        return 0;
    }

    cout << "2. Which is the largest ocean?" << endl;
    cout << "   a) Pacific Ocean" << endl;
    cout << "   b) Atlantic Ocean" << endl;
    cout << "   c) Indian Ocean" << endl;
    cout << "   Your answer: ";
    char answer2;
    cin >> answer2;

    if (answer2 == 'a' || answer2 == 'A') {
        cout << "   Correct!" << endl;
        score++;
    }
    else {
        cout << "   Wrong answer. Game over!" << endl;
        return 0;
    }

    cout << "3. Which planet is the third from the Sun?" << endl;
    cout << "   a) Earth" << endl;
    cout << "   b) Venus" << endl;
    cout << "   c) Mars" << endl;
    cout << "   Your answer: ";
    char answer3;
    cin >> answer3;

    if (answer3 == 'c' || answer3 == 'C') {
        cout << "   Correct!" << endl;
        score++;
    }
    else {
        cout << "   Wrong answer. Game over!" << endl;
        return 0;
    }

    cout << "4. Who won the Eurovision Song Contest in 2021?" << endl;
    cout << "   a) Måneskin" << endl;
    cout << "   b) Duncan Laurence" << endl;
    cout << "   c) Netta" << endl;
    cout << "   Your answer: ";
    char answer4;
    cin >> answer4;

    if (answer4 == 'a' || answer4 == 'A') {
        cout << "   Correct!" << endl;
        score++;
    }
    else {
        cout << "   Wrong answer. Game over!" << endl;
        return 0;
    }

    cout << "5. Who won the FIFA World Cup in 2022?" << endl;
    cout << "   a) France" << endl;
    cout << "   b) Argentina" << endl;
    cout << "   c) Italy" << endl;
    cout << "   Your answer: ";
    char answer5;
    cin >> answer5;

    if (answer5 == 'b' || answer5 == 'B') {
        cout << "   Correct!" << endl;
        score++;
    }
    else {
        cout << "   Wrong answer. Game over!" << endl;
        return 0;
    }
  
    if (score == 5) {
        cout << "Congratulations! You won the game!" << endl;
    }
    else {
        cout << "Game over. You answered " << score << " question(s) correctly." << endl;
    }

    return 0;
}

