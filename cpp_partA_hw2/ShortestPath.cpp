#pragma once
#include <iostream>
#include <vector>
#include <string>
#include<map>
#include<ctime>
#include<random>
#include<queue>
#include"ShortestPath.h"

using namespace std;
#define INF 999999

ShortestPath::ShortestPath(Graph& G) :graph(G) {
}

vector<int>ShortestPath::vertices() {
    vector<int> neigh_vector;
    for (int i = 0; i < this->graph.V(this->graph); i++) {
        for (int j = 0; j < this->graph.V(this->graph); j++) {
            if (this->graph.C
        }
    }
}
