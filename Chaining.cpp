/*
 * File:   Chaining.cpp
 * Author: tate
 *
 * Created on 2015/06/11, 18:33
 */

#include "Chaining.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include <map>
#include <set>
#include <vector>

using namespace std;

Chaining::Chaining(char* filename)
{
    // I will write I/O
    ifstream ifs(filename);

    string line;
    /*while (getline(ifs, line,'\t')) {
        // ファイルの中身を一行づつ表示

        cout << line << endl;}*/
    char f[10];
    int temp[5];
    while((ifs>>temp[0]>>temp[1]>>temp[2]>>temp[3]>>temp[4]>>f)!=0)
    {
        int* tmp = new int[5];
        memcpy(tmp,temp,sizeof(int)*5);
        /*vector<int> tep;
        tep.push_back(temp[0]);
        tep.push_back(temp[1]);
        tep.push_back(temp[2]);
        tep.push_back(temp[3]);
        tep.push_back(temp[4]);*/
        //memcpy(temp2,temp,sizeof (int)*5);
        ///cout << (vect[0])[1] << endl;
        X.insert(std::make_pair(temp[0],tmp));
        X.insert(std::make_pair(temp[1],tmp));
    }
}

Chaining::Chaining(const Chaining& orig)
{
}

Chaining::~Chaining()
{
}

void Chaining::generate()
{
    for(auto itX = X.begin(); itX != X.end(); ++itX)
    {
        if ((*itX).first == ((*itX).second)[0])   //if X is start point
        {
            pair<int,int*> newX;
            int pointer = 0;
            for(auto itY = Y.begin(); itY != Y.end(); ++itY)
            {
                if (((*itX).second)[0] >= ((*itY).second)[1] && ((*itX).second)[2] >= ((*itY).second)[3])  //X>Y
                {
                    cout << "found" << ((*itY).second)[1] << endl;
                    if((*itY).second[4] > pointer)  //Biggest
                    {
                        pointer = (*itY).second[4];
                        newX=std::make_pair((*itY).first,(*itY).second);
                    }
                }
            }
            if(pointer != 0)
            {
                ((*itX).second[0])  = newX.second[0];
                ((*itX).second[2])  = newX.second[2];
                ((*itX).second[4]) += newX.second[4];
            }
            cout << (*itX).first << " " << ((*itX).second)[0] << " " << ((*itX).second)[2] << " " <<((*itX).second)[4] << endl;
        }
        else        //if X is end point
        {
            cout << ((*itX).second)[1] << "end" << endl;
            bool valid = true;
            for(auto itY = Y.begin(); itY != Y.end(); ++itY)
            {
                if (((*itX).second)[3]>=((*itY).second)[3] && ((*itX).second)[4]<=((*itY).second)[4])
                {
                    valid = false;
                    break;
                }
            }
            if(valid==true) Y.insert(make_pair((*itX).first, (*itX).second));
            //eliminate　D
            for(auto itY = Y.begin(); itY != Y.end(); ++itY)
            {
                if (((*itX).second)[3] <= ((*itY).second)[3] && ((*itX).second)[4] > ((*itY).second)[4])
                {
                    //To do <eliminate>
                    Y.erase(itY);
                }
            }
        }
        result();
    }
}

void Chaining::result()
{
    for(auto itY = Y.begin(); itY != Y.end(); ++itY)
    {
        cout<< (*itY).first << " " << ((*itY).second)[0] << " " << ((*itY).second)[1] << " " << ((*itY).second)[4] << endl;
    }
}

int Chaining::maxscore()
{
    int ret = 0;
    for(auto itY = Y.begin(); itY != Y.end(); ++itY)
    {
        if ((*itY).second[4] > ret) ret = (*itY).second[4];
    }
    return ret;
}
