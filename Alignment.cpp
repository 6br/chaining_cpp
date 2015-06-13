/*
 * File:   Alignment.cpp
 * Author: tate
 *
 * Created on 2015/06/11, 19:21
 */

#include "Alignment.hpp"

Alignment::Alignment(int sx, int sy, int ex, int ey, int score) {
    SX = sx;
    SY = sy;
    EX = sx;
    EY = ey;
    Score = score;
}

Alignment::Alignment(const Alignment& orig) {
}

Alignment::~Alignment() {
}

int Alignment::getEX(){
	return EX;
}

int Alignment::getEY(){
	return EY;
}

int Alignment::getSY(){
	return SY;
}

int Alignment::getSX(){
	return SX;
}

int Alignment::getScore(){
	return Score;
}

void Alignment::setEX(int ex){
	EX = ex;
}

void Alignment::setSX(int sx){
	SX = sx;
}
