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
            if (this->graph.C(this->graph)[i][j] != INF) {
                if (!(find(neigh_vector.begin(), neigh_vector.end(), i) != neigh_vector.end()))
                    neigh_vector.push_back(i);
            }
            

        }

    }
    return neigh_vector;
}

vector<int> ShortestPath::path(int u, int w) {
    vector<int> vertices_vector = vertices();
    vector<int> my_path;

    map<int, int> pre;
    map<int, bool>visited;
    map<int, float>dis;

    PriorityQueue p;
    int to_add_node;
    pair<int, float> last_node, temp;

    for (auto v : vertices_vector) {
        pre[v] = -1;
        dis[v] = INF;
    }

}

float ShortestPath::path_size(int u, int w) {
    vector<int> shortest_path = path(u, w);
    float sum = 0;
    for (int i = 0; i < shortest_path.size() - 1; i++) {
        sum += graph.get_edge_value(graph, shortest_path[i], shortest_path[i + 1]);

    }
    return sum;

}
