#pragma once
#include <string>
#include <iostream>
using namespace std;

class Product {
    string name;
    string category;
    double price;
    double weight;
public:
    Product();
    Product(string n, string cat, double pr,double we);
    void Print();
    void Init(string n, string cat, double pr,double we);
    void Input();
    void SetName(char* n) {
        name = n;
    }
    string GetName() {
        return name;
    }
    void SetCategory(const string& c) {
        category = c;
    }
    string GetCategory() {
        return category;
    }
    void SetPrice(double pr) {
        price = pr;
    }
    double GetPrice() {
        return price;
    }
    void SetWeight(double w) {
        weight = w;
    }
    double GetWeight() {
        return weight;
    }
};
