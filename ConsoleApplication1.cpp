// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std::chrono;

int trynum;
int dg;
std::vector<int> numlist = {};
int Strt;
int Stp;

int i = 0;
int curnum = 2;
int divcount = 0;
int listpos = 0;
std::int64_t now() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}
void lop() 
{
    std::cout << "Kolik míst?: ";
    std::cin >> dg;
    Strt = now();
    std::cout << "vypocitavam...";
    while (curnum <= dg) {
        //writeln('zkousim ' + IntToStr(curnum));
        if (floor(sqrt(curnum)) == sqrt(curnum)) {

            //writeln('neni nic')
        }
        else {
            //writeln('zkus');
            trynum = 2;
            while (trynum < sqrt(curnum)) {
                if (((curnum / trynum) % 1) == 0) {
                    divcount++;
                    trynum++;
                }
                else {
                    trynum++;
                }
            }
            //writeln(divcount);
            //writeln(trynum);
            if (divcount == 0) {
                //writeln(IntToStr(curnum) + ' je prvocislo' + #13#10);
                numlist.push_back(curnum);
                listpos++;
            }
            else {
                //writeln(IntToStr(curnum) + ' neni prvocislo' + #13#10);
                divcount = 0;
            }
        }
        curnum++;
    }

    Stp = now();

    printf("Nalezena prvocisla: ");
    //write whole numlist
    for (i = 0; i < listpos - 1; i++) {
        std::cout << numlist[i];
        std::cout << ", ";
    }
    printf("\n");
    printf("Nalezeno prvocisel: ");
    std::cout << listpos;

    std::cout << "Time taken: ";
    std::cout << (Stp - Strt);

    /*Writeln('Press any key...');
    readln();*/
}

int main()
{


    i = 0;
    curnum = 2;
    divcount = 0;
    listpos = 0;
    //numlist = [];
    //numlist.length = dg;
    /*console.log('asi to neni cislo nebo nevim uz');
    console.log('pres');
    prompt.get('', function (err, result) {
        if (err) { return onError(err); }
    });
    all();*/
    lop();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
