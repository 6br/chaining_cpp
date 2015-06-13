/*
 * File:   Alignment.cpp
 * Author: tate
 *
 * Created on 2015/06/11, 19:21
 */

#include "Alignment.hpp"

Alignment::Alignment(int sx, int sy, int ex, int ey, int score) {
    sx = sx;
    sy = sy;
    ex = sx;
    ey = ey;
    score = score;
}

Alignment::Alignment(const Alignment& orig) {
}

Alignment::~Alignment() {
}

