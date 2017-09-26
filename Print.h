#ifndef STATE_H
#define STATE_H

#include <queue>

#include "Node.h"
#include "State.h"

void printFrontier(priority_queue<Node*, vector<Node*>, CompareNodes> frontier);

void printExpand();

//string getItemString(Item item);

#endif