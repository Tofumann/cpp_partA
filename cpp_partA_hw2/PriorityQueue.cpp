#pragma once
#include <iostream>
#include <vector>
#include <string>
#include<map>
#include<ctime>
#include<random>
#include<queue>
#include"PriorityQueue.h"

#define INF 999999
using namespace std;

bool cmp(const pair<int, float> left, const pair<int, float> right) {
    return left.second < right.second;
}

void PriorityQueue::chgPriority(PriorityQueue PQ, int loc, float priority) {
    this->q[loc] = priority;
}

void PriorityQueue::minPriority(PriorityQueue PQ) {
    if (this->size(PQ) > 0) {
        auto it = min_element(this->q.beign(), this->q.end(), cmp);
        this->q.erase(it);
    }
}

bool PriorityQueue::contains(PriorityQueue PQ, pair<int, float> queue_element) {
    for (auto it = this->q.begin(); it != this->q.end(); ++it) {
        if (it->first == queue_element.first) {
            return true;
        }
    }
    return false;
}

