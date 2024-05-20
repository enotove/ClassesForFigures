#pragma once
#include "string"
class Figure
{
protected:
    int corners;
    std::string nameFigure;
public:
    Figure();
    std::string PringNameFigure();
    virtual std::string PrintSide() { return ""; }
    virtual std::string PrintAngle() { return ""; }
};

