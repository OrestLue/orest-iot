#pragma once
#include <iostream>
#include <string>

using namespace std;

class Tree
{

private:

    string name;
    double price;
    string material;
    double height;

protected:

    string color;
    double age;

public:
    string country;
    double width;

    Tree() {}

    Tree(string Name, string material, double price, double Height,string color, double age, string country, double width);
    void get_name();
    void get_material();
    void get_price();
    void get_height();
    void get_country();
    void get_width();
    void get_color();
    void get_age();
};