// Homework 2: Implementing Dijkstra's Algorithm

#pragma once
#include <iostream>
#include <vector>
#include <string>
#include"Graph.h"
#include<map>
#include<ctime>
#include<random>

using namespace std;
#define INF 999999

Graph::Graph() {
    int node_number = 50;
    this->con_matrix = new float* [node_number];
    for (int i = 0; i < node_number; i++) {
        this->con_matrix[i] = new float[node_number];
        for (int j = 0; j < node_number; j++) {
            this->con_matrix[i][j] = INF;
        }
    }
    this->vertex_num = node_number;
    this->edge_num = 0;
}

Graph::Graph(int node_number) {
    this->con_matrix = new float* [node_number];
    for (int i = 0; i < node_number; i++) {
        this->con_matrix[i] = new float[node_number];
        for (int j = 0; j < node_number; j++) {
            this->con_matrix[i][j] = INF;
        }
    }
    this->vertex_num = node_number;
    this->edge_num = 0;
}

int Graph::V(Graph G) {
    return this->vertex_num;
}

int Graph::E(Graph G) {
    return this->edge_num;
}

float** Graph::C(Graph G) {
    return this->con_matrix;
}

bool Graph::adjacent(Graph G, const int x, const int y) {
    if (this->con_matrix[x][y] == INF)
        return false;
    else
        return true;
}

vector<int>Graph::neighbors(Graph G, const int x) {
    vector<int> neigh_vector;
    for (int i = 0; i < this->vertex_num; i++) {
        if (this->con_matrix[x][i] != INF) {
            neigh_vector.push_back(i);
        }
    }
    return neigh_vector;
}

void Graph::add(Graph G, const int x, const int y, const float value) {
    //create a random distance between min and max
    if (this->con_matrix[x][y] == INF) {
        this->con_matrix[x][y] = value;
        this->con_matrix[y][x] = value;
        this->edge_num++;
    }
}

void Graph::delete_edge(Graph G, const int x, const int y) {
    if (this->con_matrix[x][y] != INF) {
        this->con_matrix[x][y] = INF;
        this->con_matrix[y][x] = INF;
        this->edge_num--;
    }
}


char Graph::get_node_value(Graph G, const int x) {
    return this->node_maps[x];
}

void Graph::set_node_value(Graph G, int x, char a) {
    this->node_maps[x] = a;
}

float Graph::get_edge_value(Graph G, const int x, const int y) {
    for (int i = 0; i < V(G); i++) {
        for (int j = 0; j < V(G); j++) {
            if (x == i && y == j) {
                return this->con_matrix[x][y];
            }
        }
    }
    return INF;
}

void Graph::set_edge_value(Graph G, const int x, const int y, const float v) {
    this->con_matrix[x][y] = v;
    this->con_matrix[y][x] = v;
}