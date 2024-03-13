#pragma once

#include "graphNode.h"

struct Graphnode;

struct Edge {
    int weight;
    GraphNode *source;
    GraphNode *destination;

};