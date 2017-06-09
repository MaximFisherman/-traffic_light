#include <iostream>
#include <ctime>
#include <unistd.h>
#include <stdio.h>

using namespace std;

class State{
public:
    void timer(int ms);
    string Red(){return "red";}
    string Yellow(){return "yellow";}
    string Green(){return "green";}
};


void State::timer(int ms)
{
    clock_t end_time = clock() + ms * CLOCKS_PER_SEC / 1000;  // время завершения
    int i = 0;
    while (clock() < end_time) {
            sleep(1);
            cout<<Red()<<endl;
            sleep(1);
            cout<<Yellow()<<endl;
            sleep(1);
            cout<<Green()<<endl;
            sleep(1);
            cout<<"___________________"<<endl;
    sleep(0.2);
    }  // цикл ожидания времени

        std::cout << "I'm stop work";  // сообщение о конце работы функции
}

int main()
{
    State st;
    st.timer(360000);// Start 1 hours cycle
    return 0;
}
