/*
 * File:   main.cpp
 * Author: tate
 *
 * Created on 2015/06/11, 11:22
 */

#include <cstdlib>
#include <iostream>
#include "Chaining.hpp"


using namespace std;

/*
 *
 */
int main(int argc, char** argv)
{

    Chaining chain = Chaining("chaining.txt");
    chain.generate();
    assert(chain.maxscore(),25);
    cout << chain.maxscore() << "is the best score." <<endl;


    return 0;
}

