#ifndef TILE_BUILD_H
#define TILE_BUILD_H
#include <string>
#include "Recast.h"

#include "Geometry.h"

class WDT;

class TileBuilder
{
public:
    TileBuilder(std::string world, int x, int y, WDT* wdt);
    void CalculateTileBounds(float*& bmin, float*& bmax);
    uint8* Build();

    std::string World;
    int X;
    int Y;
    int MapId;
    rcConfig Config;
    rcContext* Context;
    Geometry* _Geometry;
    uint32 DataSize;
    WDT* Wdt;
};
#endif