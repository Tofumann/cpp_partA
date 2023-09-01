// Homework 2: Implementing Dijkstra's Algorithm

#pragma once
#include <iostream>
#include <vector>
#include <string>
#include"Graph.h"

using namespace std;

Graph::Graph() {
    int node_number = 50;
    this->con_matrix = new float* [node_number];
    for (int i = 0; i < node_number; i++) {

    }
}

Graph::Graph(int node_number)
