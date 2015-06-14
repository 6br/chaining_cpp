/*
 * File:   Chaining.hpp
 * Author: tate
 *
 * Created on 2015/06/11, 18:33
 */

#include <string>
#include <map>
#include "Alignment.hpp"
#include <vector>

#ifndef CHAINING_HPP
#define     CHAINING_HPP

class Chaining {
public:
    Chaining(char* filename);
    Chaining(const Chaining& orig);
    virtual ~Chaining();
    void generate();
    void result();
    int maxscore();
private:
    std::multimap<int,int*> X;
    std::multimap<int,int*> Y;
};

#endif	/* CHAINING_HPP */

