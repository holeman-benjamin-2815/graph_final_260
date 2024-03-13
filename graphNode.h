#pragma once

#include <vector>

#include "edge.h"

struct GraphNode {
    char name;
    std::vector <Edge *> neighbors; //more efficient at adding elements
    
};