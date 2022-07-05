// WorkersApriorit_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


struct Worker
{
    int number;
    double salary;
};



int main()
{
    srand(time(0));
    const int sz = 20;
    const int lowRange = 9000;
    const int highRange = 45000;
    Worker workers[sz] = {};
    double sum = 0.0;
    for (int i = 0; i < sz; i++)
    {
        workers[i].number = i + 1;
        workers[i].salary = 1.0 * lowRange + rand() % (highRange - lowRange);
        std::cout << "id : " << workers[i].number << "\tsalary : " << workers[i].salary << "\n";
        sum += workers[i].salary;
    }

    std::cout << "\t\tAvg salary : " << sum / sz << "\n";
}

