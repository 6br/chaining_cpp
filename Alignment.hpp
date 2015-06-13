/* 
 * File:   Alignment.hpp
 * Author: tate
 *
 * Created on 2015/06/11, 19:21
 */

#ifndef ALIGNMENT_HPP
#define	ALIGNMENT_HPP

class Alignment {
public:
    Alignment(int sx, int sy, int ex, int ey, int score);
    Alignment(const Alignment& orig);
    virtual ~Alignment();
    int SX();
    int EX();
    int SY();
    int EY();
    int Score();
private:
    int sx;
    int sy;
    int ex;
    int ey;
    int score;
};

#endif	/* ALIGNMENT_HPP */

