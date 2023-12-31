#include "main.h"
void roller();
void driveForward(double distance);
void index(int target);
void indexLast(int target); //used to index the last disc which requires extra time
void turnToAngle(double targetAngle);
extern okapi::IMU  inertial;
extern double initAngle;
void driveBlorward(double distance, double scalar);
void bangBang();
extern double targetF;
void driveBackward(double distance, double scalar);    
void driveToPoint(double posX, double posY,bool backward,double speed);
extern double ogXPos;
extern double ogYPost;
extern double distance;
extern double targetAngle;
void drive_dis(double distance, double scalar);    
void shootAtPoint(double targetX,double targetY);
void shootAtPointThread(void * );
extern bool on;
extern double targetX;
extern double targetY;
extern  double invertedSlope;
