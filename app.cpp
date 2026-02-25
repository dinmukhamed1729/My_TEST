
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;


struct Task {
    int   type;          // 1 – шарт, 2 – for циклі, 3 – while циклі
    string question;     // тапсырма мәтіні
    int   correct;       // дұрыс жауап
};
void show_menu();
Task generate_task(int type);
bool check_answer(const Task& task, int user_answer);
double calculate_score(int correct, int total);
void print_separator(char ch = '=', int width = 55);
void print_result(int correct, int total);
