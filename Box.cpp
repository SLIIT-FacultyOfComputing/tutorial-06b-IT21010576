#include <iostream>
#include "Box.h"


// Implement setters and getters
void Box::setLength(int plength)
{
  length = plength;
}
void Box::setHeight(int pheight)
{
  height = pheight;
}
void Box::setWidth(int pwidth)
{
  width = pwidth;
}
int Box::getLength()
{
  return length; 
}
int Box::getHeight()
{
  return height;
}
int Box::getWidth()
{
  return width;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() 
{
  return length * height * width;
}
