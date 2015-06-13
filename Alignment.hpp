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
    int getSX();
    int getEX();
    int getSY();
    int getEY();
    int getScore();
    void setSX(int sx);
    void setEX(int ex);
private:
    int SX;
    int SY;
    int EX;
    int EY;
    int Score;
};

#endif	/* ALIGNMENT_HPP */

