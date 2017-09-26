#include "stdafx.h"
#include <iostream>

#include "Print.h"
#include "State.h"

using namespace std;


void printFrontier(priority_queue<Node*, vector<Node*>, CompareNodes> frontier)
{
   priority_queue<Node*, vector<Node*>, CompareNodes> copiedFrontier = frontier;

   cout << "Frontier nodes are: ";

   while (!copiedFrontier.empty())
   {
//      State *state = copiedFrontier.top()->getState();



         
   }
}

void printExpand()
{

}

