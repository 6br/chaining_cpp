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

int &Alignment::operator[](int i){    // [] 演算子の多重定義
	switch(i){
	case 0:
		return SX;
	case 1:
		return SY;
	case 2:
		return EX;
	case 3:
		return EY;
	case 4:
		return Score;
	default :
		cerr << "配列の範囲から外れています！";
		return NULL;
	}
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
