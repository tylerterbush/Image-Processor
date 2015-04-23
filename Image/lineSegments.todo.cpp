#include "lineSegments.h"
#include <math.h>

////////////////////////////
// Image processing stuff //
////////////////////////////
float OrientedLineSegment::length(void) const
{
    float xDist = (this->x2 - this->x1)^2;
    float yDist = (this->y2 - this->y1)^2;
    return  sqrt(xDist + yDist);
}
float OrientedLineSegment::distance(const int& x,const int& y) const
{
    float len = this->length();
    //For the case where the line segment's length is zero
    if(len == 0.0){
        return sqrt((this->x1 - x)^2 + (this->y1 - y)^2);
    }
    
    return fabs((x2 - x1)*(y1 - y) - (x1 - x)*(y2-y1)) / len;
}
void  OrientedLineSegment::getPerpendicular(float& x,float &y) const
{
	x=y=0;
}

void  OrientedLineSegment::GetSourcePosition(const OrientedLineSegment& source,const OrientedLineSegment& destination,
											 const int& targetX,const int& targetY,
											 float& sourceX,float& sourceY)
{
	sourceX=sourceY=0;
}
