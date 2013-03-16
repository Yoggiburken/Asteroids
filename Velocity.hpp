#ifndef VELOCITY_HPP
#define VELOCITY_HPP

class Velocity {
    double              xspeed;
    double              yspeed;
public:
    void                velocityChange(Force total, double angle);   
};

#endif
