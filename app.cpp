
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
